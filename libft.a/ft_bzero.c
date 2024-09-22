#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    unsigned char   *ptr;
    size_t             i;

    ptr = s;
    i = 0;
    while (i < n)
    {
        *ptr = 0;
        i++;
        ptr++;
    }
}
/*
#include <string.h>
#include <stdio.h>
int main ()
{
    char x[] ="helloo";
    char y[] ="helloo";
    ft_bzero(x,4);
    bzero(y,4);
    printf ("x = %c\n",x[5]);
    printf ("y = %c \n",y[5]);
}
*/