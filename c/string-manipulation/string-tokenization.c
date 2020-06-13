#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char * strstrip(char * s) {
    size_t size;
    size = strlen(s);
    if (!size)
        return s;
    return s;
}

int main() {
    char str[100] = "This is -    awesome   - if   this - is - possible";
    const char * delim = "- \t\r\n\a";
    char * token;
    char ** tokens = malloc(sizeof(char*) * 1024);
    int position = 0;
    
    // get the first token 
    token = strtok(str, delim);

    // walk through the other tokens
    while (token != NULL) {
        tokens[position++] = token;
        token = strtok(NULL, delim);
    }

    int i = 0;
    for(i = 0; i < position; i++)
        printf("--> %s\n", tokens[i]);

    return 0;

}