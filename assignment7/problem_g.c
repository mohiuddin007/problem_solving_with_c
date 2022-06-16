#include<stdio.h>
#include<string.h>

int main(){
    char tString[] = "heidi";
    int lenOf_tStr = strlen(tString);

    char str[100];
    scanf("%s", &str);
    int lenOf_str = strlen(str);

    if(lenOf_str > lenOf_tStr){
        int count[lenOf_tStr];
        memset(count, 0, lenOf_tStr * sizeof(int));
        int x=1;
        for(int i=0; i<lenOf_tStr; i++){
            char test = tString[i];
            int testIndex = i;
            for(int i=0; i<lenOf_str; i++){
                if(test == str[i]){
                    count[testIndex] += 1;
                };
            }
        }
        for(int i=0; i<lenOf_tStr; i++){
            if(count[i] == 0){
                x=0;
            }
        }
        if(x==0){
            printf("NO");
        }else{
            printf("YES");
        }

    } else {
        printf("NO");
    }
}
