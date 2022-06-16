////it gives me little bit pera.
//Takahashi and Aoki decided to train themselves by running.
//Takahashi repeats the following schedule: "Run for AA seconds at BB meters per second and then rest for CC seconds."
//Aoki repeats the following schedule: "Run for DD seconds at EE meters per second and then rest for FF seconds."
//When XX seconds have passed since they simultaneously started running, which of Takahashi and Aoki is ahead?
#include<stdio.h>

int main(){
    int a, b, c, d, e, f, x;
    scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &x);

    int takaGo = 0;
    int aokiGo = 0;

    int takaSpend = 0;
    int aokiSpend = 0;

    while(takaSpend < x) {
        int time = 0;
        if (takaSpend + a < x) {
            takaGo += a;
            time += a;
//            if (takaSpend + a +c < x) {
//                time += c;
//            } else {
//                int r = x -
//            }
        } else if (takaSpend + a > x) {
            int remain = x - (takaSpend);
            takaGo += remain;
        }
        takaSpend += a+c;
    }

    while(aokiSpend <= x) {
        if (aokiSpend + d < x) {
            aokiGo += d;
        } else if (aokiSpend + d > x) {
            int remain = x - (aokiSpend);
            aokiGo += remain;
        }
        aokiSpend += d+f;
    }

    int takaTotalGo = takaGo * b;
    int aokiTotalGo = aokiGo * e;

    if (takaTotalGo > aokiTotalGo) {
        printf("Takahashi");
    } else if (takaTotalGo < aokiTotalGo) {
        printf("Aoki");
    } else if (takaTotalGo == aokiTotalGo) {
        printf("Draw");
    }
}
