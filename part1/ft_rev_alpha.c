#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    char *str = argv[1];
    while (*str)
    {
        char c = *str;
        int count = 1;
        if (c >= 'a' && c <= 'z')
            count = c - 'a' + 1;
        else if (c >= 'A' && c <= 'Z')
            count = c - 'A' + 1;
        int i = count;
        while (i-- > 0)
            write(1, &c, 1);
        str++;
    }
    write(1, "\n", 1);
    return (0);
}