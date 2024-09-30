#include "libft.h"

void *memmove(void *dest, const void *src, size_t n)
{
    size_t          i;
    unsigned char   *ptrd;
    const char      *ptrs;

    ptrd = dest;
    ptrs = src;
    i = 0;
   if (ptrd > ptrs && ptrd < ptrs + n)
   {
        while (n > 0)
        {
            ptrd[n - 1] = ptrs[n - 1];
            n--;
        }
   }
   else
        while (i < n)
        {
            ptrd[i] = ptrs[i];
            i++; 
        }
    return dest;
}