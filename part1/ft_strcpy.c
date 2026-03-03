#include <unistd.h>
#include <stdio.h>
#include <string.h>
char    *ft_strcpy(char *s1, char *s2)
{
    int i;
    
    i = 0;
    while(s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return(s1);
}

int main()
{
    char str1[] = "bread";
    char str2[] = "drugssss";
    //printf("str2: %s", strcpy(str1, str2));
    printf("str2: %s", ft_strcpy(str1, str2));
}