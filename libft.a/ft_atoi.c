int ft_atoi(const char *str)
{
    int i;
    int nbr;
    int sing;

    sing = 1;
    nbr = 0;
    i = 0;
    while ((str[i] >= 9 && str[i] <= 32 ) || str[i] == 127 )
    {
        i++;
    }
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sing *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        nbr = nbr * 10 + (str[i] - '0');
        i++;
    }
    return (nbr * sing);
}