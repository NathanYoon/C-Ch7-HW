
#include<stdio.h>

int main(int argc, char* argv[]) {
    FILE* fp1 = fopen("file1.txt", "r");
    FILE* fp2 = fopen("file2.txt", "r");
    char c = getc(fp1);
    char ch = getc(fp2);

    while (c != EOF && ch != EOF) {
        if (c != ch) {
            putchar(c);
            putchar(ch);
            break;
        }
        c = getc(fp1);
        ch = getc(fp2);
    }

   
    fclose(fp1);
    fclose(fp2);
    return 0;
}

