#pragma warning(disable:4996)

#include <cstdio>
#include <cstring>
#include <conio.h>

/*
    Source by Programiz (https://www.programiz.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    char str[] = "Testing putc() function";
    FILE* fp;

    fp = fopen("file.txt", "w");

    if (fp) {
        for (int i = 0; i < strlen(str); i++) {
            putc(str[i], fp);
        }
    } else {
        perror("File opening failed");
    }
        
    fclose(fp);

    _getch();
    return 0;
}