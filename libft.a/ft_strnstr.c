#include "libft.h"

int find(const char *big, const char *small, int x) 
{
    int i;

    i = 0;
    while(small[i])
    {
        if ((small[i] == big[i]) && i <= x)
            i++;
        else 
            return (-1);
    }
    return (1);
}

char *ft_strnstr(const char *s1, const char *s2, size_t n)
{
    if (s2[0] == 0)
        return ((char *)s1);
    while (*s1 && n-- > 0)
    {
        if (*s1 == s2[0])
        {
            if (find(s1,s2,n) == 1)
            {
                return ((char *)s1);
            }
        }
        s1++;
    }
    return (NULL);
}
/*
int main ()
{
    printf ("%s\n",ft_strnstr("helloworld","world",10));

    //printf ("%s\n",strnstr("hello world","wor",20));
}*/