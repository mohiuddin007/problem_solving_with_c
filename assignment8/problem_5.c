#include<stdio.h>
#include<stdbool.h>
bool check_array(int *arr, int n){
    bool allValue;
    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if((i+1) == arr[j]){
                count++;
            }
        }
    }
    if(count == n){
        allValue = true;
    } else {
        allValue = false;
    }
    return allValue;
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    bool res = check_array(arr, n);
    if(res == true){
        printf("true");
    } else {
        printf("false");
    }
}
