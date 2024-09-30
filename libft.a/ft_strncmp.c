#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    while (*str1 == *str2 && n-- > 0)
    {
        str1++;
        str2++;
    }
    return (*str1 - *str2);
}
/*
int main ()
{
    char x[11]= "salgaU";
    char y[11]= "salazU";
    printf ("%d\n",ft_strncmp(x,y,1));
    printf ("%d",strncmp(x,y,1));
}*/