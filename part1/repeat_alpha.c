#include <unistd.h>

void calc_alphanum(char c, int i) // this function helps to calc the corresponding numerical value of alpha
{
    while(i > 0)
    {
        write(1, &c, 1);
        --i;
    }
}

void reve_alpha(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            calc_alphanum(str[i], (str[i] - 'a' + 1));
        else if(str[i] >= 'A' && str[i] <= 'Z')
            calc_alphanum(str[i], (str[i] - 'A' + 1));
        else
            write(1, &str[i], 1);
        i++;
    }
}

int main (int argc, char *argv[])
{
    if (argc == 2)
    {
        reve_alpha(argv[1]);
        return(0);
    }
}