#include<stdio.h>
void reverse(int *arr, int n, int *arr2){
    for(int i=0, j=n-1; i<n; i++, j--){
        arr2[i] = arr[j];
    }
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n], arr2[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    reverse(arr, n, arr2);
    for(int i=0; i<n; i++){
        printf("%d ", arr2[i]);
    }
}
