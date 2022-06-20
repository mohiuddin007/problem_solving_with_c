#include<stdio.h>

int count_swaps(int *a, int n){
    int count = 0;
    for(int pos=0; pos<n-1; pos++){
        for(int check=pos+1; check<n; check++){
            if(a[check]<a[pos]){
                int tem = a[check];
                a[check]=a[pos];
                a[pos]=tem;
                count++;
            }
        }
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d", &ar[i]);
    }
    int res = count_swaps(ar, n);
    for(int i=0; i<n; i++){
        printf("%d ", ar[i]);
    }
    printf("\n");
    printf("Swap for %d times", res);
}
