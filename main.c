#include <stdio.h>

static int normal_year[12]  = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
static int special_year[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void decrement_date(int *y, int *m, int *d) {
    *d -= 1;
    if(*d == 0) {
        *m -= 1;
        if(*m == 0) {
            *m = 12; *y -= 1;
        }
        if(*y % 4 == 0) {
            *d = special_year[*m-1];
        } else {
            *d = normal_year[*m-1];
        }
    }
}

void increment_date(int *y, int *m, int *d) {
    *d += 1;
    if(*y % 4 == 0) {
        if(*d > special_year[*m-1]) {
            *d = 1; *m += 1;
            if(*m > 12) {
                *m = 1; *y += 1;
            }
        }
    } else {
        if(*d > normal_year[*m-1]) {
            *d = 1; *m += 1;
            if(*m > 12) {
                *m = 1; *y += 1;
            }
        }
    }
}

int main(void) {
    int y, m, d;
    printf("Date\n");
    printf("year : ");  scanf("%d",&y);
    printf("month: ");  scanf("%d",&m);
    printf("day  : ");  scanf("%d",&d);

    int dec_y = y;
    int dec_m = m;
    int dec_d = d;
    decrement_date(&dec_y, &dec_m, &dec_d);

    printf("Decrement result\n");
    printf("year : %d\n", dec_y);
    printf("month: %d\n", dec_m);
    printf("day  : %d\n", dec_d);

    int inc_y = y;
    int inc_m = m;
    int inc_d = d;
    increment_date(&inc_y, &inc_m, &inc_d);

    printf("Increment result\n");
    printf("year : %d\n", inc_y);
    printf("month: %d\n", inc_m);
    printf("day  : %d\n", inc_d);

    return 0;
}