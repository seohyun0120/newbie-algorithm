// 1부터 n까지의 합 구하기
#include <stdio.h>
int plus(int i) 
{
    if (i==1) return 1;
    else return i+plus(i-1);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", plus(n));

    return 0;
}
