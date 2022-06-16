
#include<stdio.h>
#include<string.h>

int main() {
    int n;
    scanf("%d", &n);
    char wd[100];
    for(int x=0; x<n; x++){
        scanf("%s", wd);
        for(int j=0; j<strlen(wd); j=j+2){
            if(j==0){
                printf("%c%c", wd[0],wd[1]);
            } else {
                printf("%c", wd[j+1]);
            }
        }
        printf("\n");
    }
    return 0;
}
