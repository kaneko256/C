#include <stdio.h>
int swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
    return 1;
}
void sort3(int *n1, int *n2, int *n3)
{
    *n1 > *n2 && swap(n1, n2);
    *n1 > *n3 && swap(n1, n3);
    *n2 > *n3 && swap(n2, n3);
}
int main(void)
{
    int a = 3, b = 10, c = 2;
    sort3(&a, &b, &c);
    printf("a = %d, b = %d, c = %d", a, b, c);
    return 0;
}
