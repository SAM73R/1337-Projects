int ft_isalnum(int c)
{
    if ((c >= 48 && c <= 57) || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (2);
    else
        return (0);
}
/*#include <stdio.h>
#include <ctype.h>
int main()
{
    printf ("dyalhoom = %d  dyali = %d", isalnum('g'),ft_isalnum('g'));
}*/