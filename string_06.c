#include <stdio.h>
#include <string.h>

void revRecursive(char *l, char *r) {
  
    if (l != r) {
        char c = *l;
        *l = *r;
        *r = c;
      
        revRecursive(l + 1, r - 1);
    }
}

void rev(char *s) {

    
    revRecursive(s, s + strlen(s) - 1);
}

int main() {
    char s[] = "GeeksforGeeks";

    rev(s);

    printf("%s", s);
    return 0;
}
