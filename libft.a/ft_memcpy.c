#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
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
        ptrd++;
        ptrs++;
        i++;
    }
}
/*

#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello, World!";
    char dest[20];

    ft_memcpy(dest, src, sizeof(src));
    printf("%p -- %s\n", &dest[0],dest);

    //src[0] = 'b';
    // Output copied string
    printf("%p -- %s\n", &src[0],src);
   // printf("Destination: %s\n", dest);
    
    return 0;
}
*/