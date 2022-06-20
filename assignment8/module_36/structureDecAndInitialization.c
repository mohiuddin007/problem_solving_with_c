#include<stdio.h>
#include<string.h>

struct Student {
    char name[100];
    int roll;
    int marks;
    int last_marks[100];
};

int main(){
    struct Student a={"sjfl", 22, .marks=89};
    strcpy(a.name, "akib");
    for(int i=0; i<5; i++){
        scanf("%d", &a.last_marks[i]);
    }
    printf("%s %d %d", a.name, a.roll, a.marks);
}
