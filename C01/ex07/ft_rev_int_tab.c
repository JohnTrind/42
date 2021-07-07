void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		ri;
	int		swap;

	i = 0;
	ri = size - 1;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[ri];
		tab[ri] = swap;
		i++;
		ri--;
	}
}

int main()
{
    int tab = "12345";
    ft_rev_int_tab(tab , 5);
    printf("%s\n", tab);
    return(0);
}


