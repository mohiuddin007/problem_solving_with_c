#include<stdio.h>
#include <string.h>
char *stringCat(char a[], char b[], char out[]){
    return strcat(strcpy(out, a), b);
}

int main (){
    char a[1000], b[1000];
    char out[1000];
    scanf("%s %s", a, b);

    stringCat(a, b, out);

    printf("%s", out);
}


