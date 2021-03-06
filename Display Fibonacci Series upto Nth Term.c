//Display Fibonacci Series upto Nth Term
#include <stdio.h>
int n;
void disp_fibonacci(int n);

int main(void)
{
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series upto %dth term:\n", n);
    disp_fibonacci(n);
    return 0;
}

void disp_fibonacci(int n)
{
    int i = 0, j = 1, tmp = 0;
    switch (n)
    {
    case 1:
        printf("0, ");
        break;
    case 2:
        printf("0, 1, ");
        break;
    default:
        printf("%d, ", i);
        while (--n)
        {
            printf("%d, ", j);
            tmp = i;
            i = j;
            j += tmp;
        }
    }
}
