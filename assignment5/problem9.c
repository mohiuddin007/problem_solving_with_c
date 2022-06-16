#include<stdio.h>
#include<string.h>

int main(){
    char text[100];
    gets(text);
    char pattern;
    scanf(" %c", &pattern);

    char *cur = text;
    int n = strlen(cur);
    for(int i=0; i<n; i++) {
        if(cur[i] == pattern){
            printf("Found at %d index\n", i);
        }
    }
}


