#include <stdio.h>

int main() {
    char ch;
    char s[25];
    char sen[25];

    scanf("%c", &ch);
    printf("%c\n", ch);

    scanf("%24s", s); 
    printf("%s\n", s);

    scanf(" %[^\n]", sen); 
    //scanf(" %[^\n]", sen);
    printf("%s\n", sen);

    return 0;
}
