/// AtCoder Beginner Contest 333
/// B - Pentagon

#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

int length(char s[]) {
    char small = s[0];
    char large = s[1];
    if (small > large)
        swap(&small, &large);

    if (small + 1 == large)
        return 1;
    if (small + 2 == large)
        return 2;
    if (small + 3 == large)
        return (5 - 3);
    if (small + 4 == large)
        return (5 - 4);

    return 0;
}

int main(int argc, char const *argv[]) {
    char s[100], t[100];
    scanf("%s %s", s, t);
    int length_Of_S = length(s);
    int length_Of_T = length(t);

    (length_Of_S == length_Of_T) ? printf("Yes\n") : printf("No\n");
    return 0;
}
