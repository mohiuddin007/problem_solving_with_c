#include<stdio.h>
#include<string.h>
void Strcpy (char in[], char out[]){
    strcpy(out, in);
}
int main (){
    char in[200];
    scanf("%s", &in);
    int lenOfIn = strlen(in);
    char out[lenOfIn+1];

    Strcpy(in, out);
    printf("%s", out);
}
