#include<stdio.h>
struct Time {
    int hour;
    int minute;
    int second;
};

void printTime(struct Time t){
    printf("%d:%d PM", t.hour, t.minute);
}

int main(){
    struct Time time = {6, 30, 00};
    printTime(time);
}
