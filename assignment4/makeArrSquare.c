#include<stdio.h>
void makeNArray(int n, int nums[]){
    for(int i=0; i<n; i++){
       nums[i] *= nums[i];
    }
};

int main(){
    int n;
    scanf("%d", &n);

    int nums[n];
    for(int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }
    makeNArray(n, nums);

    for(int i=0; i<n; i++){
         printf("%d ", nums[i]);
    }
}
