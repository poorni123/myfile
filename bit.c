#include <stdio.h>
int main() {
    int i = 65;
    int j = 120;
    printf(" value of i=%d j=%d before swapping", i, j);

    i = i ^ j;
    j = i ^ j;
    i = i ^ j;
    printf("value of i=%d j=%d after swapping", i, j);

    return 0;
}
