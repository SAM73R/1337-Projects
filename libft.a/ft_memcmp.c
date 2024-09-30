#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    char    *p1;
    char    *p2;

    p1 = (void *)str1;
    p2 = (void *)str2;
    while (*p1 == *p2 && n-- > 0)
    {
        p1++;
        p2++;
    }
    if (*p1 - *p2 > 0)
        return (1);
    else if (*p1 - *p2 < 0)
        return (-1);
    else
        return (0);
}
/*
int main ()
{
    char x[11]= "salaU";
    char y[11]= "salaU";

    printf ("%d\n",ft_memcmp(x,y,5));
    printf ("%d",memcmp(x,y,5));
}*/