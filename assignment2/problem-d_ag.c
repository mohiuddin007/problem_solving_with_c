#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    char s[n];
    scanf("%s", &s);

    int king = 0;
    int iron = 0;

    for(int i=0; i<n; i++){
        if (s[i] == 'A') {
            king ++;
        } else if(s[i] == 'D') {
            iron ++;
        }
    }
    if(king > iron) {
        printf("Anton");
    } else if (king < iron) {
        printf("Danik");
    } else if (king == iron) {
        printf("Friendship");
    }
}

//solved
