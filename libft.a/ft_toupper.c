int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    else
        return (c);
}
/*
#include <stdio.h>
#include <ctype.h>
int main()
{
    printf ("dyalhoom = %c  dyali = %c",toupper('s'),ft_toupper('A'));
}
*/