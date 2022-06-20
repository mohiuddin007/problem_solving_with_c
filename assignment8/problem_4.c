#include<stdio.h>
int bar(){
    printf("bar\n");
}
int foo(){
    printf("foo\n");
    bar();
}
int main(){
    foo();
}
