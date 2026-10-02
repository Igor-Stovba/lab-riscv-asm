#include <stdio.h>

#define N 4
#define M 4

extern int sum_array(int *arr);

int main(void) {
    int arr[N][M] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int result = sum_array(&arr[0][0]);

    printf("Sum = %d\n", result);

    return 0;
}