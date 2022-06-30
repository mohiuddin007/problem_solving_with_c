#include<stdio.h>

int main(){
    int n, k;
    scanf("%d %d", &n, &k);

    int result=1;
    for(int i=0; i<n; i++){
        int res1 = result *2;
        int res2 = result + k;
        if(res1 < res2){
            result = res1;
        } else {
            result = res2;
        }
    }
    printf("%d", result);
}

// Square1001 has seen an electric bulletin board displaying the integer 11. He can perform the following operations A and B to change this value:

// Operation A: The displayed value is doubled.
// Operation B: The displayed value increases by KK.
// Square1001 needs to perform these operations NN times in total. Find the minimum possible value displayed in the board after NN operations.