#include "libft.h"

void *calloc(size_t num, size_t size)
{
    void *ptr;
    size_t total;

    total = size * num;
    ptr = malloc(total);
    if (ptr == NULL)
        return (NULL);
    ft_memset(ptr,0,total);
    return (ptr);
}