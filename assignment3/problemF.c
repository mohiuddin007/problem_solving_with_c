#include<stdio.h>
#include<string.h>
int main(){
    long long int num;
    scanf("%I64d",&num);
    int com;
    int ans =0;
    while(num>0){
        com = num%10;
        if(com==4 || com==7){
            ans+=1;
        }
        num /= 10;
    }
    if((ans==4) || (ans==7)){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
