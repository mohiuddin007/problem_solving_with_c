#include<stdio.h>
int change_values(int *ar, int N, int L, int R){
    for(int i=0; i<N; i++){
        if(i >= L && i <= R){
            ar[i] = 0;
        }
    }
}
int main(){
    int N, L, R;
    scanf("%d %d %d", &N, &L, &R);
    int ar[N];
    for(int i=0; i<N; i++){
        scanf("%d", &ar[i]);
    }
    change_values(ar, N, L, R);
    for(int i=0; i<N; i++){
        printf("%d ", ar[i]);
    }

}


//Write a function named change_values() which will take an array of integers ar[], the size of the array N, and two more integer values L and R. You need to change all the values of the array between L-th index and R-th index to 0.
//Print the array in the  main() function. Here,
//(0 <= L,R < N  and 0 < N <=100000 and 0 <= ar[i] <= N)
