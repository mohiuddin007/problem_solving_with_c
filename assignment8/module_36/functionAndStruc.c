#include<stdio.h>
#include<string.h>

struct Student {
    char name[100];
    int roll;
    int marks;
};
void print_struct(struct Student a){
    printf("%s %d %d\n", a.name, a.roll, a.marks);
}
void fun(struct Student *st){
    (*st).marks = 100;
}
int main(){
    struct Student a={"akib", 21, 82};
    fun(&a);
    print_struct(a);
}

