#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d", &ar[i]);
    }
    int mul;
    scanf("%d", &mul);

    for(int i=0; i<n; i++){
        int fir = ar[i];
        for(int j=i+1; j<n; j++){
            int mulVal = ar[j] * fir;
            if(mulVal == mul){
                printf("YES");
                return 0;
            }
        }
    }
    printf("NO");
    return 0;
}

//Take an array name ar[] of size N where the values will be unique. Also take another integer value named mul as input. Print “YES” if you can make  mul by multiplying
//two different values from that array. Otherwise, print “NO”. Here,
//(0 < N <= 100 and 0 <= ar[i] <= N and 0 <= mul <= 10000)
