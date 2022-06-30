#include<stdio.h>

struct Student{
    int roll;
    int _class;
    int marks;
};
int main(){
    int n;
    scanf("%d", &n);
    struct Student stud;
    int arr[n];
    int sum=0;
    for(int i=0; i<n; i++){
        scanf("%d %d %d", &stud.roll, &stud._class, &stud.marks);
        arr[i]=stud.marks;
    }
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    printf("%d", sum);
    return 0;
}


//What is structure in C? Make an example to create a
//structure named Student with three integer values
//named roll, class, marks and make a variable with it.
//Now make an array of that structure of size N which
//will take input from the user and calculate the sum of marks of all students and print it.
