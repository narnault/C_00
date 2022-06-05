#include <unistd.h>

void	put_comb(int tab[], int nb)
{
	int		i;
	char	j;

	i = -1;
	while (++i < nb)
	{
		j = tab[i] + '0';
		write(1, &j, 1);
	}
	if (tab[0] != 10 - nb)
		write(1, ", ", 2);
}

void	recure_comb(int tab[], int nb, int i)
{
	if (i == 0)
		tab[i] = 0;
	else
		tab[i] = tab[i - 1] + 1;
	while (tab[i] < 11 - nb + i)
	{
		if (i == nb - 1)
			put_comb(tab, nb);
		else
			recure_comb(tab, nb, i + 1);
		tab[i] = tab[i] + 1;
	}
}

void	ft_print_combn(int nb)
{
	int	tab[10];

	recure_comb(tab, nb, 0);
}

int main() {
    
    ft_print_combn(5);
}
