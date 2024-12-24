#include <stdio.h>
int main() {
	FILE *file = fopen("bt01.txt", "w"); 
    char chuoi[100];  
    printf("Nhap vao mot chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin); 
    fputs(chuoi, file);  
    fclose(file);
    printf("Chuoi da duoc ghi vao file bt01.txt\n");
    return 0;
}


