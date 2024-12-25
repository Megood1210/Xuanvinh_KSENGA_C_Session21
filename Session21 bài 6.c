#include <stdio.h>
int main() {
    FILE *fptr_in, *fptr_out;
    char ch;
    fptr_in = fopen("bt01.txt", "r");
    if (fptr_in == NULL) {
        printf("Loi mo file\n");
        return 1;
    }
    fptr_out = fopen("bt06.txt", "w");
    if (fptr_out == NULL) {
        printf("Loi mo file\n");
        fclose(fptr_in);  
        return 1;
    }
    while ((ch = fgetc(fptr_in)) != EOF) {
        fputc(ch, fptr_out);
    }
    fclose(fptr_in);
    fclose(fptr_out);
    printf("Da sao chep noi dung cua bt01.txt sang bt06.txt\n");
    return 0;
}



