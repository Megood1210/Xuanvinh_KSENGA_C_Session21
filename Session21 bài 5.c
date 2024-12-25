#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    printf("Nhap so dong: ");
    scanf("%d", &n);
    getchar(); 
    FILE *fptr = fopen("bt05.txt", "w");
    if (fptr == NULL) {
        printf("Loi mo file\n");
        return 1;
    }
    char line[100]; 
    for (int i = 0; i < n; i++) {
        printf("Nhap noi dung dong %d: ", i + 1);
        fgets(line, sizeof(line), stdin); 
        fprintf(fptr, "%s", line);  
    }
    fclose(fptr);
    fptr = fopen("bt05.txt", "r");
    if (fptr == NULL) {
        printf("Loi mo file.\n");
        return 1;
    }
    printf("\nNoi dung file bt05.txt:\n");
    while (fgets(line, sizeof(line), fptr) != NULL) {
        printf("%s", line);
    }
    fclose(fptr);
    return 0;
}


