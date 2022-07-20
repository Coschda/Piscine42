/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoumi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 09:04:54 by mdoumi            #+#    #+#             */
/*   Updated: 2022/07/20 12:54:00 by mdoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	find_max(int *tab, int size)
{
	int	i;
	int	tmax;

	i = 0;
	tmax = 0;
	while (i < size)
	{
		if (tab[tmax] < tab[i])
			tmax = i;
		i++;
	}
	return (tmax);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	tmax;

	while (size > 0)
	{
		tmax = find_max(tab, size);
		swap(&tab[tmax], &tab[size - 1]);
		size--;
	}
}





void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

int	main(int argc, char **argv)
{
	int	i;
	char	**tab;

	i = 0;
	while (argv[i+1])
	{
		tab[i] = argv[i+1];
		i++;
	}
	return (0);
}
