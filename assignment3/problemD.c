#include<stdio.h>
#include<ctype.h>

int main(){
    int n = 1000;
    char name[n];
    scanf("%s", name);
    name[0] = toupper(name[0]);
    printf("%s", name);
}
