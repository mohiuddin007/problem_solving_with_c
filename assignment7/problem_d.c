#include<stdio.h>

int main(){
    int numOf_testCase;
    scanf("%d", &numOf_testCase);

    for(int i=0; i<numOf_testCase; i++){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
        }
        int frqArr[100] = {0};

        for(int i=0; i<n; i++){
            int indexValue = arr[i];
            frqArr[indexValue] += 1;
        }
        int res = -1;
        for(int i=0; i<100; i++){
            if(frqArr[i]>=3){
               res = i;
            }
        }
        printf("%d", res);
    }
}
