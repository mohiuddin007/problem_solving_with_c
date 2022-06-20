#include<stdio.h>
#include<string.h>
char *strrev(char *s){
    if (s && *s) {
        char *b = s, *e = s + strlen(s) - 1;
        while (b < e) {
            char t = *b;
            *b++ = *e;
            *e-- = t;
        }
    }
    return s;
}
int main(){
    char a[100], b[100];
    scanf("%s", &a);
    strcpy(b,a);
    strrev(b);
    int count = 0;
    for(int i=0; i<strlen(a); i++){
        if(a[i] != b[i]){
           count++;
        }
    }
    int res = count/2;
    printf("%d %d", count, res);

    return 0;
}
