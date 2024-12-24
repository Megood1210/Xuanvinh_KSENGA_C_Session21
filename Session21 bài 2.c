#include <stdio.h>
int main() {
	FILE *file = fopen("bt01.txt", "r");   
  	char firstChar = fgetc(file);  
    if (firstChar == EOF) {
        printf("File khong co ky tu\n");
    } else {
        printf("Ky tu dau tien trong file la: %c\n", firstChar);
    }
    return 0;
}


