#include<stdio.h>
#include<stdbool.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

bool is_reverse_sorted(int n, int a[]){
    int stored[n];
    bool isReversed = true;
    for(int i=0; i<n; i++){
        stored[i] = a[i];
    }
    for (int steps=0; steps<n; steps++){
        for(int i=0; i+1<n; i++){
            if(a[i] < a[i+1]){
                swap(&a[i], &a[i+1]);
            }
        }
    }
    for(int i=0; i<n; i++){
        if (a[i] != stored[i]){
            isReversed = false;
        }
    }
    return isReversed;
}

int main(){
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    bool res = is_reverse_sorted(n, a);

    printf(res == 1 ? "true" : "false");
}
