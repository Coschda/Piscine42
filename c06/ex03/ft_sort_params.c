/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoumi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 19:48:23 by mdoumi            #+#    #+#             */
/*   Updated: 2022/07/23 19:31:51 by mdoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;


}

int	find_max(char *tab[], int size)
{
	int	i;
	int	tmax;

	i = 0;
	tmax = 0;
	while (i < size)
	{
		if (ft_strcmp(tab[tmax], tab[i]) < 0)
			tmax = i;
		i++;
	}
	return (tmax);
}

void	ft_sort_str_tab(char *tab[], int size)
{
	int	tmax;

	while (size > 0)
	{
		tmax = find_max(tab, size);
		swap(&tab[tmax], &tab[size-1]);

		size--;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	swap(&argv[0], &argv[argc-1]);
	argv[argc-1] = "\0";
	argc = argc - 1;
	ft_sort_str_tab(argv, argc);
	i = 0;
	j = 0;
	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		j = 0;
		i++;
	}
}
