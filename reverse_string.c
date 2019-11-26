/*
This program reverse a string contained in array variable "str".
*/

#include <stdio.h>
int str_length(char *src);
void reverse_string(char *src, int length);

int main(void)
{
    char str[] = "The string.";
    reverse_string(str, str_length(str));
    return 0;
}

int str_length(char *src)
{
    int length = 0;
    while (*(src + length) != '\0')
        length++;
    //printf("Length = %d\n", length);
    return length;
}

void reverse_string(char *src, int length)
{
    printf("After reversing:\n");
    length--;
    for (; length >= 0; length--)
    {
        printf("%c", *(src + length));
    }
}
