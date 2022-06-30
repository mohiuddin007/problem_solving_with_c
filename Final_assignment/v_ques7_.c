#include<stdio.h>
#include<string.h>
int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    char ch[100000];
    scanf("%s", ch);
    for(int i = n-1, j=m-1; i < j; i++,j--){
        char temp = ch[i];
        ch[i] = ch[j];
        ch[j] = temp;
    }
    printf("%s\n", ch);
    return 0;
}

// Bitman gifts you some integers LL, RR, and a string SS consisting of lowercase English letters.
// Print this string after reversing (the order of) the LL-th through RR-th characters.
