#include <stdio.h>
#include <string.h>
void reverseWords(char *str) {
    int length = strlen(str);
    for (int start = 0, end = length - 1; start < end; start++, end--) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
    }
    int wordStart = 0;
    for (int i = 0; i <= length; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            int wordEnd = i - 1;
            while (wordStart < wordEnd) {
                char temp = str[wordStart];
                str[wordStart] = str[wordEnd];
                str[wordEnd] = temp;
                wordStart++;
                wordEnd--;
            }
            wordStart = i + 1; }}}
int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    reverseWords(str);
    printf("Reversed string: %s", str); 
    return 0;}
