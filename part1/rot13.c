#include <unistd.h>

void mk_13(char c)
{
    if (c >= 'a' && c <= 'z')
        c = ((c - 'a' + 13) % 26) + 'a';
    else if (c >= 'A' && c <= 'Z')
        c = ((c - 'A' + 13) % 26) + 'A';
    write(1, &c, 1);
}

void rot_str(char *str)
{
    int i;

    i= 0;
    while (str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            mk_13(str[i]);
        else if(str[i] >= 'A' && str[i] <= 'Z')
            mk_13(str[i]);
        else
            write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        rot_str(argv[1]);
        write(1, "\n", 1);
    }
    else
        write(1, "\n", 1);
    return 0;
}