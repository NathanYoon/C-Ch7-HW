// Programmer: Elnathan Yoon
// Assignment: Exercise 7-8. Write a program to print a set of files, starting each new one on a new page,
// with a title and a running page count for each file.

#include<stdio.h>

void printFiles(FILE* f1, FILE* f2, int pageCount) {
    char c = getc(f1);

    while (c != EOF) {
        putc(c, f2);
        c = getc(f1);
    }
    fprintf(f2, "\nPage %d\n", pageCount);
}

int main(int argc, char* argv[]) {
    FILE* fp1 = fopen("file1.txt", "r");
    FILE* fp2 = fopen("file2.txt", "w");
    int pages = 1;

    printFiles(fp1, fp2, pages);
    pages++;

    fclose(fp1);
    fclose(fp2);
    return 0;
}

