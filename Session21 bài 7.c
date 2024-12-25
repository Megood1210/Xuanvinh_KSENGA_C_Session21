#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int id;        
    char name[100];
    int age;     
} Student;
int main() {
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    Student students[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap thong tin cho sinh vien %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].id);
        getchar(); 
        printf("Ten: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0;
        printf("Tuoi: ");
        scanf("%d", &students[i].age);
    }
    FILE *fptr = fopen("students.txt", "w");
    if (fptr == NULL) {
        printf("Loi mo file\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        fprintf(fptr, "%d %s %d\n", students[i].id, students[i].name, students[i].age);
    }
    fclose(fptr);
    printf("Thong tin sinh vien da duoc luu vao file students.txt\n");
    return 0;
}



