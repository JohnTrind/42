void ft_ultimate_div_mod(int *a, int *b)
{
    int tempa = *a;
    int tempb = *b;
    *a = tempa / tempb;
    *b = tempa % tempb;
}