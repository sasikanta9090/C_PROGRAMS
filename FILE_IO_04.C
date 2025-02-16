#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE* fptr;

    
    fptr = fopen("demo_file.txt", "w+");

    fprintf(fptr, "%s", "GeeksforGeeks");
    fclose(demo);

    return 0;
}
