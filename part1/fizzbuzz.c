#include <unistd.h>

void ft_wri(int num)
{
    // int num;
    char c;
    if (num >= 10)
        ft_wri(num / 10);
    c = (num % 10) + '0';
        write(1, &c, 1);
    //num++;
}

// int main()
// {
//     int num;
//     num = 1;
//     while (num <= 20)
//     {
//         ft_wri(num);
//         num++;
//     }
// }

int main()
{
    int nbr;

    nbr = 1;
    while(nbr <= 100)
    {
        if((nbr % 15) == 0)
            write(1, "sugarlemon", 10);
        else if((nbr % 5) == 0)
            write(1, "lemon", 5);
        else if((nbr % 3) == 0)
            write(1, "sugar", 5);
        else
            ft_wri(nbr);
            write(1, "\n", 1);
        nbr++;
    }
}