#include <stdio.h>
#include <stdlib.h>

#define N 500
int a[N];

int main(){
    for (register int i = 0; i < N; i++) {
        a[i] = i;
    }
    for (register int i = 0; i < N; i++) {
        for (register int j = N - 1; j > i; j--) {
            register x = a[i];
            register y = a[j];
            if (x < y) {
                a[i] = y;
                a[j] = x;
            } else {
                a[i] = x;
                a[j] = y;
            }
        }
    }
    return 0;
}
