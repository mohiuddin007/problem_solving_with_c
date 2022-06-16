#include<stdio.h>
#include<string.h>

int main(){
    char str1[] = "hello";

    char *a = strchr(str1, 'e');
    printf("%s\n", a);

    char *b = strstr(str1, "e");
    printf("%s\n", b);
}

