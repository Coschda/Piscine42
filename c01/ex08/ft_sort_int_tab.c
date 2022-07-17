/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoumi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 19:48:23 by mdoumi            #+#    #+#             */
/*   Updated: 2022/07/17 09:46:21 by mdoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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
