
#include<stdio.h>
#include<string.h>

int main() {
    int N, sum=0;
    scanf("%d", &N);
    int A[N];
    for(int i=0; i<N; i++){
        scanf("%d", &A[i]);
    }

    int max_num = 0;
    for(int i=0; i<N; i++){
        if(A[i]> max_num){
            max_num=A[i];
        }
        sum +=A[i];
    }
    int avg=max_num*N;

    printf("%d", avg-sum);
    return 0;
}
