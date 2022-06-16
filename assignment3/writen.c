
#include<stdio.h>
#include<string.h>
int main(){
        int n = 10;

        int a[n], b[n];

        for (int i=0; i<n; i++) {

                //Write Code Here
            int tmp = a[i];
            a[i] = b[i];
            b[i] = tmp;

        }
                    printf("%d %d", a, b);
}

