#include <stdio.h>

/*This is a code to print from 1 to a definite number input */

int main() {
    int count = 1;
    int a;
    scanf("%d", &a);
    while (count <= a) {
        printf(" %d\n", count);
        count++;
    }
    
    return 0;
}
