
#include <string.h>
#include <stdio.h>

int main()
{
    // Take any two strings
    char s1[] = "GeeksforGeeks";
    char s2[] = "for";
    char* p;

    // Find first occurrence of s2 in s1
    p = strstr(s1, s2);
    printf("%s", p);

    // Prints the result
    if (p) {
        printf("String found\n");
        printf("First occurrence of string '%s' in '%s' is '%s'", s2, s1, p);
    } else
        printf("String not found\n");

    return 0;
}
