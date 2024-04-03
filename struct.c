#include <stdio.h>
// 첫 번째 구조체 정의
struct student1 {
    char lastName;
    int studentId;
    char grade;
};
// 두 번째 구조체 정의 및 typedef 사용
typedef struct {
    char lastName;
    int studentId;
    char grade;
} student2;
int main() {
    
    struct student1 st1 = {'A', 100, 'A'};   // 첫 번째 구조체 변수 st1 초기화
    printf("st1.lastName = %c\n", st1.lastName);    // st1의 성 출력
    printf("st1.studentId = %d\n", st1.studentId);  // st1의 학생 ID 출력
    printf("st1.grade = %c\n", st1.grade);  // st1의 학점 출력
    student2 st2 = {'B', 200, 'B'}; // 두 번째 구조체 변수 st2 초기화
    printf("\nst2.lastName = %c\n", st2.lastName);  // st2의 성 출력
    printf("st2.studentId = %d\n", st2.studentId);  // st2의 학생 ID 출력
    printf("st2.grade = %c\n", st2.grade);  // st2의 학점 출력
    student2 st3;   // 구조체 변수 st3 선언 및 st2로 초기화
    st3 = st2;
    printf("\nst3.lastName = %c\n", st3.lastName);  // st3의 성 출력
    printf("st3.studentId = %d\n", st3.studentId);   // st3의 학생 ID 출력
    printf("st3.grade = %c\n", st3.grade);  // st3의 학점 출력

    /* equality test */
    // 구조체 변수 st3와 st2의 값이 같은지 비교
    if(st3.lastName == st2.lastName && st3.studentId == st2.studentId && st3.grade == st2.grade)  // 각 멤버를 비교하여 같으면
        printf("equal\n");  // 같음을 출력
    else
        printf("not equal\n");  // 다름을 출력
        
    printf("[----- [이태정] [2023041062] -----]");
    return 0;
}