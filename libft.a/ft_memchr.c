#include "libft.h"

void *ft_memchr(const void *str, int c, size_t n)
{
    char  *p;

    p = (void *)str;
    while (n-- > 0)
    {
        if (*p == (char)c)
            return (p);
        p++;
    }
    return (NULL);
}
/*
int main ()
{
    char x[10] = "salam";
    char y[10] = "salam";
    char *a,*b;

    a = memchr(x,'l',9);
    printf ("%s\n",a);


    b = ft_memchr(y,'l',9);
    printf ("%s",b);
}*/