#include <stdio.h>
int main() {
    char str[100];
    printf("Nhap vao mot chuoi: ");
    fgets(str, sizeof(str), stdin); 
    str[strcspn(str, "\n")] = '\0';
    FILE *fptr = fopen("bt01.txt", "a"); 
    if (fptr == NULL) {
   		printf("Loi khi mo file\n");
        return 1;
	}
	fseek(fptr, 0, SEEK_END);
	if (ftell(fptr) != 0) {
        fputs(" ", fptr);
	}
    fputs(str, fptr);
    fclose(fptr);
    printf("Chuoi da duoc ghi them vao file bt01.txt\n");
    return 0;
}



