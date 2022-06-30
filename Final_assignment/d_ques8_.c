#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=n-2; i>0; i--){
        for(int j=0; j<i; j++){
            printf("*");
        }
        printf("\n");
    }
}

//Question: Take an integer N as input and make a pattern for that number. Sample is given below:
//Input 1:
//5
//Output 1:
//*
//**
//***
//****
//*****
//****
//***
//**
//*
