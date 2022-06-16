#include <stdio.h>
struct student {
    char name[100];
    int roll_no;
    char grade;
    // Array within the structure
    float marks[5];
};
void PrintResult(struct student a1){
    printf("Name : %s\n", a1.name);
    printf("Roll number : %d\n", a1.roll_no);
    printf("Grade : %c\n", a1.grade);
    printf("Marks secured:\n");
    int i;
    int len = sizeof(a1.marks) / sizeof(float);
// array within the structure
    for (i = 0; i < len; i++) {
        printf("Subject %d : %.2f\n",
               i + 1, a1.marks[i]);
    }
}
int main(){
    // Initialize a structure
    struct student student1 = {
        .roll_no=1,
        .grade='A',
        .marks={ 88, 79.4, 70, 80, 70.5 }
    };

    strcpy(student1.name, "Rahim");
    // Function to display structure
    PrintResult(student1);
    return 0;
}
