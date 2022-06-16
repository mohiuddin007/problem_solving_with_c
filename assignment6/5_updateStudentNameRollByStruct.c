#include<stdio.h>
struct Date {
    int day;
    int month;
    int year;
};
struct Student{
    char *name[100];
    int className;
    int roll;
    struct Date dob;
};

void printStudent(struct Student st){
    printf("Name: %s\n", st.name);
    printf("Class: %d\n", st.className);
    printf("Roll: %d\n", st.roll);

    printf("DOB: ");
    printDate(st.dob);
}

void printDate(struct Date date){
    printf("%d-%d-%d\n", date.day, date.month, date.year);
}

int main(){
    struct Student st1 = {
        .className=9,
        .roll=10,
        .dob={1, 2, 2000}
    };
    char name[] = "korim";
    strcpy(st1.name, name);
    printf("\nPrevious info:\n");
    printStudent(st1);

    st1.roll=15;
    char name2[] = "Rahim";
    strcpy(st1.name, name2);
    printf("\nUpdated info:\n");
    printStudent(st1);

}
