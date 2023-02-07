#include <stdio.h>

void print_bits(unsigned int x) {
    int i;
    for (i = 31; i >= 0; i--) {
        if(((x>>i) & 1) == 1) {
            putchar('1');
        } else {
            putchar('0');
        }
    }
    putchar('\n');
}

int main(void) {
    int a = 2;
    if(!a) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}