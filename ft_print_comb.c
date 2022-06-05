#include <unistd.h>

void    ft_putchar(char c)
{
        write (1, &c, 1);
}

void	ft_putcomb(int i, int j, int k)
{
	ft_putchar(i + '0');
	ft_putchar(j + '0');
	ft_putchar(k + '0');
	if (i < 7)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				ft_putcomb(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}

int main()
{
	ft_print_comb();
}
