#include <stdio.h>

int main(int argc, const char * argv[]) {
    FILE *fptr;

    fptr = fopen("filename.txt", "w");
    if (fptr == NULL) {
        printf("Not able to open the file.");
        return 1;
    }
    
    fprintf(fptr, "Some text");

    fclose(fptr);
    return 0;
}
