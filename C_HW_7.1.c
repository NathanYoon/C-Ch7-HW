
#include<stdio.h>
#include<ctype.h>

int main(int argc, const char* argv[])
{
    int c;

    while ((c = getchar()) != EOF) {
        if (c >= 'A' && c <= 'Z')
            putchar(tolower(c));
        else if (c >= 'a' && c <= 'z')
            putchar(toupper(c));
        else if (c == ' ' || c == '\n')
            putchar((c));
        else
            printf("Invalid input.");
    }
    

    return 0;
}