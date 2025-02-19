// C program to compare the contents of two files. If both files are equal print Equal files otherwise print Unequal files.
#include<stdio.h>
#include<stdlib.h>

void compareFiles(const char *file1, const char *file2) {
    FILE *fp1 = fopen(file1, "r");
    FILE *fp2 = fopen(file2, "r");

    if (fp1 == NULL || fp2 == NULL) {
        printf("File not found");
        exit(EXIT_FAILURE);
    }

    char ch1, ch2;
    int equal = 1; // Assume files are equal initially

    while (!feof(fp1) && !feof(fp2)) {
        ch1 = fgetc(fp1);
        ch2 = fgetc(fp2);

        if (ch1 != ch2) {
            equal = 0; // Files are unequal
            break;
        }
    }
  
    // Check if both files reached EOF
    if (feof(fp1) != feof(fp2)) {
        equal = 0;
    }
    fclose(fp1);
    fclose(fp2);

    if (equal) {
        printf("Equal files\n");
    } else {
        printf("Unequal files\n");
    }
}

int main() {
    char file1[100], file2[100];
    printf("File1 name: ");
    scanf("%s", file1);
    printf("File2 name: ");
    scanf("%s", file2);
    compareFiles(file1, file2);
    return 0;
}
