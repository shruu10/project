#include<stdio.h>
#include<conio.h>

void print(char name[]){
    printf("Name %s", name);
}

int main(){
    char name[50];
    printf("Enter name ");
    scanf("%s", &name);

    printf("\nname = %s", name);
}