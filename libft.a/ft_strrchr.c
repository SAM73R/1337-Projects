char *ft_strrchr(const char *s, int c)
{
    while (*s)
        s++;
    s--;
    while (*s)
    {
        if (*s == c)
            return ((char *)s);
        s--;
    }
    return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char x[]= "esalam";
    printf ("dyalhoom = %s  dyali = %s",strrchr("esalam  ",'e'),ft_strrchr(x,'e'));
}
*/