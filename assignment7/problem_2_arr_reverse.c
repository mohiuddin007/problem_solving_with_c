#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int reverse_arr[n];
    for(int i=0, j=n-1; i<n; i++, j--){
        reverse_arr[j] = arr[i];
    }

    for(int i=0; i<n; i++){
        printf("%d ", reverse_arr[i]);
    }
}
