#include <machine.h>
#include <time.h>

#define N 200

static int a[N]= {1846,8759,2212,32551,599,24111,14573,9568,32754,3615,13647,5624,3270,24971,2412,23450,31302,13737,10042,4344,23792,21651,9744,1118,22727,9418,27218,28384,741,9552,24236,4217,18331,26948,18266,7759,6084,29276,17319,17591,7008,3064,29484,8365,29089,14748,20762,20371,31222,18637,10655,12153,25911,14817,760,6243,26599,5373,15219,11143,30279,23782,10629,1498,2582,27952,4692,26974,25458,6180,3701,32659,17635,20402,2849,25274,24304,9406,23357,18562,28701,7710,25780,1524,2137,11351,20735,13376,29907,7599,29598,23772,18826,20662,14849,20621,5702,8980,11544,16812,14580,30914,24374,10060,12695,30240,26933,23265,15744,17352,17498,20135,4304,20,18077,16624,3301,26416,10765,5235,15650,14828,31201,28773,15363,12074,11213,19463,12216,7626,28333,17656,19567,18211,2213,16818,17937,18840,24196,29115,19086,3145,22418,3758,331,8881,27051,13753,14492,21686,5620,29542,2811,14049,11791,31374,8446,21295,171,11406,26004,4959,31477,9895,27717,26014,10630,30780,2079,28466,26714,6106,17590,24342,29043,1976,25331,29158,1583,12928,6071,17581,28865,13210,28009,20784,27309,19499,25346,22921,28565,24371,20989,25661,12137,17434,16928,2064,7383,16781};

static int a_ref[N]= {20,171,331,599,741,760,1118,1498,1524,1583,1846,1976,2064,2079,2137,2212,2213,2412,2582,2811,2849,3064,3145,3270,3301,3615,3701,3758,4217,4304,4344,4692,4959,5235,5373,5620,5624,5702,6071,6084,6106,6180,6243,7008,7383,7599,7626,7710,7759,8365,8446,8759,8881,8980,9406,9418,9552,9568,9744,9895,10042,10060,10629,10630,10655,10765,11143,11213,11351,11406,11544,11791,12074,12137,12153,12216,12695,12928,13210,13376,13647,13737,13753,14049,14492,14573,14580,14748,14817,14828,14849,15219,15363,15650,15744,16624,16781,16812,16818,16928,17319,17352,17434,17498,17581,17590,17591,17635,17656,17937,18077,18211,18266,18331,18562,18637,18826,18840,19086,19463,19499,19567,20135,20371,20402,20621,20662,20735,20762,20784,20989,21295,21651,21686,22418,22727,22921,23265,23357,23450,23772,23782,23792,24111,24196,24236,24304,24342,24371,24374,24971,25274,25331,25346,25458,25661,25780,25911,26004,26014,26416,26599,26714,26933,26948,26974,27051,27218,27309,27717,27952,28009,28333,28384,28466,28565,28701,28773,28865,29043,29089,29115,29158,29276,29484,29542,29598,29907,30240,30279,30780,30914,31201,31222,31302,31374,31477,32551,32659,32754};

void shell7(void)
{
    unsigned long start_count = 0;
    unsigned long stop_count = 0;
    unsigned long total_count = 0;

    unsigned long start_count_my = 0;
    unsigned long stop_count_my  = 0;
    unsigned long total_count_my = 0;

    int i,j, err;
    int *result;

    //clear count
    SOC_TIMER = 0;
    //asm volatile("mtc0 $0, $9");

    err=0;
    printf("select sort test begin.\n");
    start_count = get_count();
    start_count_my = get_count_my();
    if(SIMU_FLAG){
        result = select_sort(a, N);
        for(j = 0; j < N; j++) {
	        if (result[j] != a_ref[j]) {
                err += 1;
                break;
            }
        }
    }else{
        for(i=0;i<LOOPTIMES;i++) {
            result = select_sort(a, N);
            for(j = 0; j < N; j++) {
	            if (result[j] != a_ref[j]) {
                    err += 1;
                    break;
                }
            }
        }
    }
    stop_count_my  = get_count_my();
    stop_count     = get_count();
    total_count    = stop_count - start_count;
    total_count_my = stop_count_my - start_count_my;


	if (err==0) {
        printf("select sort PASS!\n");
	    *((int *)LED_RG1_ADDR) = 1;  
	    *((int *)LED_RG0_ADDR) = 1;  
        *((int *)LED_ADDR)     = 0xffff;  
    }
	else {
        printf("select sort ERROR!!!\n");
	    *((int *)LED_RG1_ADDR) = 1;  
	    *((int *)LED_RG0_ADDR) = 2;  
        *((int *)LED_ADDR)     = 0;  
    }
    SOC_NUM = total_count_my;  
    *((volatile unsigned *)CONFREG_CR0) = total_count_my;  
    *((volatile unsigned *)CONFREG_CR1) = total_count; 
    printf("select sort: Total Count(SoC count) = 0x%x\n", total_count);
    printf("select sort: Total Count(CPU count) = 0x%x\n", total_count_my);

    return;
}
