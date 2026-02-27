#include <stdio.h>

void ft_swap (char **a, char **b)
{
    char *temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    char *a = "fry";
    char *b = "boil";

    printf("%s\n" "%s", a, b);

    ft_swap(&a, &b);
    printf("%s\n" "%s", a, b);
}