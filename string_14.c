#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "Geeks";
      int l1 = strlen(s1);
    char s2[] = "gfg";
      int l2 = strlen(s2);

      int minl = l1 < l2 ? l1 : l2;
    int res = strncmp(s1, s2, minl);

    if (res < 0)
        printf("\"%s\" is smaller than\"%s\".\n", s1, s2);
    else if (res > 0)
        printf("\"%s\" is greater than \"%s\".\n", s1, s2);
    else
        printf("\"%s\" is equal to \"%s\".\n", s1, s2);

    return 0;
}
