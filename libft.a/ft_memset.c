#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char    *ptr;
    int x;

    x = 0;
    ptr = s;
    while (x < n)
    {
        *ptr = c;
        x++;
        ptr++;
    }
    return (s);
}

#include <string.h>
#include <stdio.h>
int main ()
{
    char x[] ="hell";
    char y[] ="hell";
    
    printf ("X = %s\n",ft_memset(x,'1',5));
    printf ("Y = %s",memset(y,'1',5));
}