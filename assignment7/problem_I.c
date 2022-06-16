#include<stdio.h>
#include<string.h>

int main(){
    int sn;
    scanf("%d", &sn);
    char str[sn];
    scanf("%s", &str);

    int n = 0;
    int z = 0;
    for(int i=0; i<sn; i++){
        if(str[i] == 'n'){
            n++;
        }
        if(str[i] == 'z'){
            z++;
        }
    }

    for(int i=0; i<n; i++){
        printf("%d", 1);
    }
    for(int i=0; i<z; i++){
        printf("%d", 0);
    }
}
