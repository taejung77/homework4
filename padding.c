#include <stdio.h>

// �л� ������ ��� ����ü�� ����
struct student {
    char lastName[13]; /*  13 bytes */
    int studentId; /*  4 bytes */
    short grade; /*  2 bytes */
};

int main(){
    struct student pst; // ����ü student Ÿ���� ���� pst�� ������.
    printf("size of student = %ld\n", sizeof(struct student));  // ����ü student�� ũ�⸦ �����
    printf("size of int = %ld\n", sizeof(int));  // int Ÿ���� ũ�⸦ �����
    printf("size of short = %ld\n", sizeof(short)); // short Ÿ���� ũ�⸦ �����
    printf("[----- [������] [2023041062] -----]");
    return 0;
}