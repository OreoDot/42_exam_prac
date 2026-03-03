#include <stdio.h>

void	ft_swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int c = 4;
    int d = 9;
    ft_swap(&c, &d);
    printf("c:%d\n" "d:%d\n", c, d);
}