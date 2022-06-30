#include<stdio.h>
#include<stdbool.h>

int main(){
    while(true){
        int num;
        scanf("%d", &num);
        if(num == 42){
          break;
        }
        printf("%d\n", num);
    }
}


// Take integer value as input and output that value until you get 42. 
// The integer value will be less than 100