#include <stdio.h>

struct student {
    int id;
    char name[20];
    double grade;
};

int main(void) {
    struct student s1 = {123456, "Juyeop", 4.2};

    /* 멤버 값 변경 */
    s1.id = 20240001;
    sprintf(s1.name, "Minji");
    s1.grade = 3.85;

    /* 변경된 값 출력 */
    printf("ID   : %d\n", s1.id);
    printf("name : %s\n", s1.name);
    printf("grade: %.6f\n", s1.grade);

    return 0;
}
