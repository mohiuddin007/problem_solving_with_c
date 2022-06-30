#include<stdio.h>
struct fun{
    int sum;
};
struct fun a, *b;
int main(){
    b=&a;
    b->sum=5;
    printf("%d", a.sum);
}

//What are pointers? Give some examples of pointers.
//Make a pointer that points to a structure variable (format is given below),
//and change the value of sum using pointer.
//struct Fun
//{
//    int sum;
//}
