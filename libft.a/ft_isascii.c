int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return (1);
    else
        return (0);
}
/*#include <stdio.h>
#include <ctype.h>
int main()
{
    printf ("dyalhoom = %d  dyali = %d", isascii(128),ft_isascii(128));
}*/