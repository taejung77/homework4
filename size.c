#include<stdio.h>
#include<stdlib.h>

int main()
{
    int **x;    // 이중 포인터 변수 x를 선언
    printf("sizeof(x) = %lu\n", sizeof(x)); // x의 크기를 출력
    printf("sizeof(*x) = %lu\n", sizeof(*x));   // x가 가리키는 첫 번째 포인터의 크기를 출력
    printf("sizeof(**x) = %lu\n", sizeof(**x)); // x가 가리키는 포인터가 가리키는 int 값의 크기를 출력
    printf("[----- [이태정] [2023041062] -----]");
    return 0;
}