#include<stdio.h>
typedef struct{
    int id;
    char name[100];
    int age;
}Student;
int main(){
    Student students[100];
    int n=0;
    FILE *fptr=fopen("students.txt","r");
    if (!fptr) return 1;
    while (fscanf(fptr,"%d,%99[^,], %d\n",&students[n].id,students[n].name,&students[n].age)==3){
        n++;
        if (n>=100); 
		break;
    }
    fclose(fptr);
    for (int i=0;i<n;i++){
        printf("ID: %d\n,Ten: %s\n,Tuoi: %d\n",students[i].id,students[i].name,students[i].age);
    }
    return 0;
}

