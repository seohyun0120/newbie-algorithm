// 두 개의 입력값
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *args[])
{
    int num1 = atoi(args[1]);
    int num2 = atoi(args[2]);
    int sum = num1 + num2;
    printf("Sum of %d and %d is %d.", num1, num2, sum);
    return 0;
}