// Abracadabra looping

#include<stdio.h>

int main() {
    int magicNum;
    scanf("%i", &magicNum);

    for(int i=1; i<=magicNum; i++){
        printf("%i Abracadabra\n", i);
    }

    return 0;
}
