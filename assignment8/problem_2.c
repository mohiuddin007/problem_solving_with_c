#include<stdio.h>
int make_average(int *arr, int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    int avg = sum/n;
    return avg;
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int average = make_average(arr, n);
    printf("%d", average);
}
