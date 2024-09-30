#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    size_t          i;
    unsigned char   *ptrd;
    const char      *ptrs;

    ptrd = dest;
    ptrs = src;
    i = 0;
    while (i < n)
    {
        *ptrd = *ptrs;
        if (*ptrs == c)
        {
            return (++ptrd);
        }
        ptrd++;
        ptrs++;
        i++;
    }
    return (NULL);
}
/*

#include <stdio.h>
#include <string.h>

int main() 
{

    char src[] = "Hello, World!";
    char dest[20];

    printf("%p\n",ft_memccpy(dest, src, 'l',5));
    printf ("%s\n",dest);
    printf("%p\n",memccpy(dest, src, 'l',5));
    printf ("%s\n",dest);
    
}
*/