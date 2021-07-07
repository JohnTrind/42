int	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		temp;

	i = 0;
	size--;
	while (i < size)
	{
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
		i++;
		size--;
	}
    return(teste);
}

int main()
{
    int teste[] = {1,21,3232,323};
    printf("%d\n", t_rev_int_tab(teste));

}