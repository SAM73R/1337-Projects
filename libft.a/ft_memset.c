#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char    *ptr;
    size_t x;

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
    char y[] ="helloo";
    char x[] ="helloo";
    
   /* printf ("x = %s -adress x = %p\n",memset(x,'1',4),y);
    printf ("y = %s -adress y = %p",ft_memset(y,'1',4),x);*/

    printf ("x = %s -adress x = %p",memset(x,'1',8),x);
    printf ("\ny = %s -adress y = %p\n",ft_memset(y,'1',8),y);
    
   
}
