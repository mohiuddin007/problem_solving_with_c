#include<stdio.h>

void sort(int *a, int n){
    for(int pos=0; pos<n-1; pos++){
        for(int check=pos+1; check<n; check++){
            if(a[check]>a[pos]){
                int tem = a[check];
                a[check]=a[pos];
                a[pos]=tem;
            }
        }
    }
}

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int tvSetsPrice[n];

    int oggeyEarn=0;
    int allNeg[n];

    for(int i=0; i<n; i++){
        scanf("%d", &tvSetsPrice[i]);
    }

    for(int i=0; i<n; i++){
        if(tvSetsPrice[i] < 0){
            int num = tvSetsPrice[i] * -1;
            allNeg[i] = num;
        } else {
            allNeg[i] = 0;
        }
    }

    sort(allNeg, n);

    for(int i=0; i<m; i++){
       oggeyEarn += allNeg[i];
    }
    printf("%d", oggeyEarn);
}

//Once Oggy went to a sale of old TV sets. There were n TV sets at that sale.
//TV set with index i costs ai bellars. Some TV sets have a negative price — their owners are ready to pay Oggy if he buys their useless apparatus.
//Oggy can «buy» any TV sets he wants. Though he's very strong, Oggy can carry at most m TV sets, and he has no desire to go to the sale for the second time.
//Please, help Oggy find out the maximum sum of money that he can earn.

//intput
//The first line contains two space-separated integers n and m (1 ≤ m ≤ n ≤ 100) — amount of TV sets at the sale, and amount of TV sets that Oggy can carry.
//The following line contains n space-separated integers ai ( - 1000 ≤ ai ≤ 1000) — prices of the TV sets.

//output
//Output the only number — the maximum sum of money that Oggy can earn, given that he can carry at most m TV sets.
