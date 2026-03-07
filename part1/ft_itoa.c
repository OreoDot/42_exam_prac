#include <stdlib.h>
#include <stdio.h>

char *ft_itoa(int c)
{
    char *str;
    long num = c;
    long temp = num;
    int len = (num <= 0) ? 1 : 0;

    while(temp)
    {
        temp = (temp / 10);
        len++;
    }

    str = (char*)malloc(len + 1);

    if(!str)
    {
        return(NULL);
    }

    str[len] = '\0';
    if (num < 0)
        num = -num;

    while (len-- > 0)
    {
        str[len] = (num % 10) + '0';
        num = num/10;
    }

    if (c < 0)
        str[0] = '-';

    return(str);
}

int main()
{
    int f = 421;
    char *str = ft_itoa(f);
    printf("%s", str);
    free(str);
}

// #include <stdio.h>
// #include <stdlib.h>

// // Assuming you already have ft_itoa implemented
// char *ft_itoa(int n);

// int main(void)
// {
//     int number = 124;        // Change this to test other numbers
//     char *str;

//     str = ft_itoa(number);   // Convert number to string

//     if (str)
//     {
//         printf("Number: %d\n", number);
//         printf("ft_itoa output: %s\n", str);
//         free(str);           // Free memory allocated inside ft_itoa
//     }
//     else
//     {
//         printf("Memory allocation failed!\n");
//     }

//     return 0;
// }