#include<stdio.h>
#include<string.h>

int main(){
    char s[50];
    scanf("%s", &s);
    int lengthOfS = strlen(s);
    int howManyA = 0;
    for(int i=0; i<lengthOfS; i++){
        if(s[i] == 'a'){
            howManyA++;
        }
    }

    if(howManyA > lengthOfS/2){
        printf("%d", lengthOfS);
    } else {
        int finalLen = howManyA + (howManyA -1);
        printf("%d", finalLen);
    }
}


//Ashiq doesn't love strings. But he really likes letter 'a'. He assumes a string beautiful if more than half of it's character are 'a'. For example some beautiful strings are "baaba", "a", "aqawa" , but "abb", "waeaia" are not.
//As Ashiq only loves beautiful strings, so he wanted to erase some character (possibly zero) from the string s such that the string become longest beautiful string. So he wants to know what will be the size of longest string remaining after erase some character( possibly zero) to get a beautiful string.
//It is guaranteed that the string will consist of atleast one 'a'. So answer always exists.

//The first line contains a string s ( 1 <= |s| <= 50 ) consist of only lower case English letters. And it is guaranteed that there is at least one 'a' in string s ;
