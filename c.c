// 표준 입출력을 활용하여 문자열을 전부 대문자로 변환하기
// c++ 라이브러리 사용하지않고 구현

#include <stdio.h>
#include <string.h>

int main()
{
    char data [100];
    int len;

    fgets(data, 100, stdin);
    len = strlen(data);
    
    for (int i=0; i<len; i++) 
    {
        if (data[i] >= 'a' && data[i] <= 'z') data[i] = data[i] - 'a' + 'A';
    }

    printf("%s\n", data);
    return 0;
}