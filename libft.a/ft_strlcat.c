int len(char *str)
{
    int i;
    
    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

char    *ft_strlcat(char *src, char *dest, int n)
{
    int dlen;
    int i;

    dlen = len(dest);
    i = 0;
    while (src[i] && i < n)
        dest[dlen++] = src[i++]; 
    return (dest);   
}