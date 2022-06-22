#include<stdio.h>

int main(){
    FILE *logFile = fopen("log.txt", "a");
    FILE *inputFile = fopen("hskj.txt", "r");
    if(inputFile == NULL){
        fprintf(logFile, "input file not found at 12:17 AM\n");
        return 0;
    }
    fprintf(logFile, "Hello 12.20 AM\n");
}
