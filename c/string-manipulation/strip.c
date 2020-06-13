#include <stdio.h>
#include <string.h>
#include <ctype.h>

char * strstrip (char * s ) {
    size_t size;
    char * end;
    size = strlen(s);

    if (!size) 
        return s;
    
    end = s + size - 1;
    printf("Start: %p\nEnd: %p\n", s, end);
    while (end>=s && isspace(*end))
        end--;
    *(end+1) = '\0';

    while(*s && isspace(*s))
        s++;

    return s;
}


int main(){
    char s[80] = "    alamin      ";
    printf("Before --> %s | %zu\n", s, strlen(s));
    char * t = strstrip(s);
    printf("After --> %s | %zu\n", t, strlen(t));
    return 0;
}