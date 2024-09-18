char *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if (*s == c)
            return ((char *)s);
        s++;
    }
    return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char x[]= "salam";
    printf ("dyalhoom = %s  dyali = %s",strchr("salam  ",'a'),ft_strchr(x,'a'));
}
*/