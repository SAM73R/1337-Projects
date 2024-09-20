char    *ft_strlcpy(char *src, char *dest, int size)
{
    int i;

    i = 0;
    while (src[i] && i < size)
    {
        dest[i] = src[i];
        i++;
    }
    while (i <= size)
        dest[i++] = '\0';
    return (dest);
}