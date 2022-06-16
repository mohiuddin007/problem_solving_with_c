
#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int king = 0;
    int iron = 0;

    for(int i=1; i<=n; i++){
        char s;
        scanf("%c", &s);
        if (s == 'A') {
            king ++;
        } else if(s == 'D') {
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
