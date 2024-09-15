int ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
        return (1);
    else
        return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int main()
{
    printf ("dyalhoom = %d  dyali = %d",isprint('\x5'),ft_isprint('\x5'));
}
*/