int ft_strlen(char *str)
{
    int c = 0;
    int i = 0;

    while(str[i] != 0)
    {
        c++;
        i++;
    }

    return(c);
}
