#include "asm.h"
#include "regdef.h"
#include "inst_test.h"

LEAF(n11_tlbfill_test)
    addi.w s0, s0 ,0x1
	li     s2, 0x0

    li     t0, 0x0c000000 #index
    li     t1, 0xabc<<13  #VPN
    li     t2, 0x0fabc041 #PFN1 
    li     t3, 0x0ffbc041 #PFN1 
    csrwr  t0, csr_tlbidx
    csrwr  t1, csr_tlbehi
    csrwr  t2, csr_tlbelo0
    csrwr  t3, csr_tlbelo1
    tlbfill
    tlbfill
    tlbfill
    tlbfill
   
    li     t6, 0x20
    li     t5, 0x0
    li     t4, 0x0
    li     t0, 0x0c000000

2:
    addi.w t1, t0, 0x0
    csrwr  t1, csr_tlbidx
    tlbrd
    csrrd  t1, csr_tlbehi
    li     t2, 0xffffe000
    and    t1, t1, t2
    li     t2, 0xabc << 13
    bne    t1, t2, 1f
    addi.w t5, t5, 0x1 
1:
    addi.w t4, t4, 0x1 
    addi.w t0, t0, 0x1
    bne    t4, t6, 2b

    li     t1, 0x0
    beq    t5, t1, inst_error
    li     t1, 0x1
    beq    t5, t1, inst_error

###detect exception
    bne s2, zero, inst_error
###score ++
    addi.w s3, s3, 1
###output (s0<<24)|s3
inst_error:  
    slli.w t1, s0, 24
    or t0, t1, s3 
    st.w t0, s1, 0x0
    jirl zero, ra, 0x0
END(n11_tlbfill_test)
