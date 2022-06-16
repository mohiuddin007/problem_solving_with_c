#include<stdio.h>

int main(){
    int n, k, a;
    scanf("%d %d %d", &n, &k, &a);

    int gift = k;
    int counter = a;
    while (gift !=0){
        counter++;
        gift--;
    }
    if (gift == 0) {
        int person = (counter-1) % n;
        if (person == 0) {
            printf("%d", n);
        } else {
            printf("%d", person);
        }
    }
}
