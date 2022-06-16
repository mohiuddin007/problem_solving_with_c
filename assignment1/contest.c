
//There are two types of contest in Artland . Avishek has decided to participate in Artland Beginner Contest (ABC) if his current rating is less than 1200,
// and participate in Artland Regular Contest (ARC) otherwise.

#include<stdio.h>

int main() {
    int x;
    scanf("%i", &x);

    if(x < 1200){
          printf("ABC");
    } else {
        printf("ARC");
    }

    return 0;
}
