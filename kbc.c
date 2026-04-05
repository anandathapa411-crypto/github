#include <stdio.h>

struct student {
    int id;
    char name[50];
    char grade;
};

int main() {
    struct student s[5];
    int i;

    for(i = 0; i < 5; i++) {
        printf("Enter id, name, grade: ");
        scanf("%d %s %c", &s[i].id, s[i].name, &s[i].grade);
    }

    printf("\nStudent Details:\n");
    for(i = 0; i < 5; i++) {
        printf("%d %s %c\n", s[i].id, s[i].name, s[i].grade);
    }

    return 0;
}
