#include<stdio.h>
struct fraction {
    int lob;
    int hor;
};
void printFraction(struct fraction f){
    printf("The inverse of %d/%d is %d/%d", f.lob, f.hor, f.hor, f.lob);
}
int main(){
    struct fraction a;
    scanf("%d %d", &a.lob, &a.hor);
    printFraction(a);
}
