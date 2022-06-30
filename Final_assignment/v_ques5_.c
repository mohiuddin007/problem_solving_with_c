#include<stdio.h>

void sort(int *a, int n){
    for(int pos=0; pos<n-1; pos++){
        for(int check=pos+1; check<n; check++){
            if(a[check]<a[pos]){
                int tem = a[check];
                a[check]=a[pos];
                a[pos]=tem;
            }
        }
    }
}

int main(){
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int j=0; j<n; j++){
            scanf("%d", &arr[j]);
        }
        sort(arr, n);

        int res = arr[1] - arr[0];
        for(int i=0; i<n-1; i++){
            int rem = arr[i+1] - arr[i];
            if(res>rem){
                res=rem;
            }
        }
        printf("%d\n", res);
    }
}


// There are nn athletes in front of Jack. Athletes are numbered from 11 to nn from left to right. Jack knows the strength of each athlete — the athlete number ii has the strength s_is i.
// Jack want to split all athletes into two teams. Each team must have at least one athlete, and each athlete must be exactly in one team.

// Jack want the strongest athlete from the first team to differ as little as possible from the weakest athlete from the second team. Formally, Jack want to split the athletes into two teams AA and BB so that the value |\max(A) - \min(B)|∣max(A)−min(B)∣ is as small as possible, where \max(A)max(A) is the maximum strength of an athlete from team AA, and \min(B)min(B) is the minimum strength of an athlete from team BB.
// For example, if n=5n=5 and the strength of the athletes is s=[3, 1, 2, 6, 4]s=[3,1,2,6,4], then one of the possible split into teams is:

// first team: A = [1, 2, 4]A=[1,2,4],
// second team: B = [3, 6]B=[3,6].
// In this case, the value |\max(A) - \min(B)|∣max(A)−min(B)∣ will be equal to |4-3|=1∣4−3∣=1. This example illustrates one of the ways of optimal split into two teams.
// Print the minimum value |\max(A) - \min(B)|∣max(A)−min(B)∣.

// intput
// The first line contains an integer tt (1 \le t \le 10001≤t≤1000) — the number of test cases in the input. Then tt test cases follow.

// Each test case consists of two lines.

// The first line contains positive integer nn (2 \le n \le 502≤n≤50) — number of athletes.

// The second line contains nn positive integers s1, s2, ...., sn, (1<=si<=1000), where si- 
// — is the strength of the ii-th athlete. Please note that ss values may not be distinct.

// output
// For each test case print one integer — the minimum value of |\max(A) - \min(B)|∣max(A)−min(B)∣ with the optimal split of all athletes into two teams. Each of the athletes must be a member of exactly one of the two teams.

