#include<stdio.h>
struct Time {
    int hour;
    int minute;
    int second;
};
struct Interval{
    struct Time start;
    struct Time end;
};
void printTime(struct Time t){
    printf("%d:%d ", t.hour, t.minute);
}
struct Time inputTime() {
    struct Time t1;
    scanf("%d %d %d", &t1.hour, &t1.minute, &t1.second);
    return t1;
};
int main(){
    struct Interval timeInterval;
    timeInterval.start = inputTime();
    timeInterval.end= inputTime();
    printf("Start: ");
    printTime(timeInterval.start);
    printf("End: ");
    printTime(timeInterval.end);
}
