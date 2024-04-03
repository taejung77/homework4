#include <stdio.h>

// 학생 정보를 담는 구조체를 정의
struct student {
    char lastName[13]; /*  13 bytes */
    int studentId; /*  4 bytes */
    short grade; /*  2 bytes */
};

int main(){
    struct student pst; // 구조체 student 타입의 변수 pst를 선언함.
    printf("size of student = %ld\n", sizeof(struct student));  // 구조체 student의 크기를 출력함
    printf("size of int = %ld\n", sizeof(int));  // int 타입의 크기를 출력함
    printf("size of short = %ld\n", sizeof(short)); // short 타입의 크기를 출력함
    printf("[----- [이태정] [2023041062] -----]");
    return 0;
}