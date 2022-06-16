#include<stdio.h>
#include<string.h>

int main(){
    char tString[] = "heidi";
    int lenOf_subStr = strlen(tString);

    char str[100];
    scanf("%s", &str);
    int lenOf_str = strlen(str);

    if(lenOf_str > lenOf_subStr){
       for(int i=0; i<lenOf_str; i++){
        printf("%c ", str[i]);
       }
       printf("\n");
       for(int i=0; i<lenOf_subStr; i++){
            printf("%c ", tString[i]);
       }
    } else {
        printf("NO");
    }
}

