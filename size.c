#include<stdio.h>
#include<stdlib.h>

int main()
{
    int **x;    // ���� ������ ���� x�� ����
    printf("sizeof(x) = %lu\n", sizeof(x)); // x�� ũ�⸦ ���
    printf("sizeof(*x) = %lu\n", sizeof(*x));   // x�� ����Ű�� ù ��° �������� ũ�⸦ ���
    printf("sizeof(**x) = %lu\n", sizeof(**x)); // x�� ����Ű�� �����Ͱ� ����Ű�� int ���� ũ�⸦ ���
    printf("[----- [������] [2023041062] -----]");
    return 0;
}