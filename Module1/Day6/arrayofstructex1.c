#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student {
    int rollno;
    char name[20];
    float marks;
};
void parseString(const char* input, struct Student* students, int size) {
    char* token;
    char temp[20];
    token = strtok((char*)input, " ");
    for (int i = 0; i < size; i++) {
        students[i].rollno = atoi(token);
        token = strtok(NULL, " ");
        strcpy(students[i].name, token);
        token = strtok(NULL, " ");
        students[i].marks = atof(token);
        token = strtok(NULL, " ");
    }
}
int main() {
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);
    struct Student* students = (struct Student*)malloc(size * sizeof(struct Student));
    char input[100];
    printf("Enter the input string: ");
    scanf(" %[^\n]s", input);
    parseString(input, students, size);
    printf("\nArray of Structures:\n");
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Rollno: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
    free(students);
    return 0;
}