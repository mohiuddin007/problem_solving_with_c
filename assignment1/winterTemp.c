//Ireland’s winters can be very bad. The temperatures sometimes dip to uncomfortable levels. Weather
//Service wants to find out exactly how bad the winter was. More specifically, they are interested in
//knowing the total number of days in which the temperature was below zero degree Celsius.

#include<stdio.h>

int main() {
    int n;
    scanf("%i", &n);

    int sum = 0;
    for(int i=1; i<=n; i++){
        int t;
        scanf("%i", &t);
        if(t < 0){
            sum += 1;
        }
    }
    printf("%i", sum);

    return 0;
}
