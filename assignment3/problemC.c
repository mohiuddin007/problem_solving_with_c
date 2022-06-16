#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf("%d", &n);

    char ch[n];
    scanf("%s", ch);

    int i, count = 0;
    for (int i=0; i<n; i++){
        if(ch[0] < ch[i] || ch[0] > ch[i]){
            ch[0]=ch[i];
        }
        if(ch[i]==ch[i+1]){
            count++;
        }
    }
    printf("%d", count);
}
