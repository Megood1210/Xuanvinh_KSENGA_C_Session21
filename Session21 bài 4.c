#include <stdio.h>
int main() {
	FILE *fptr = fopen("bt01.txt", "r");  
    char line[200];
    if (fgets(line, sizeof(line), fptr) != NULL) {
        printf("Dong dau tien trong file la: %s", line);
    } else {
        printf("File khong co dong dau tien.\n");
    }
    fclose(fptr);
	return 0;
}



