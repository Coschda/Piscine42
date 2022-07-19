/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoumi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 11:16:06 by mdoumi            #+#    #+#             */
/*   Updated: 2022/07/19 19:30:09 by mdoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	check(char *base, int len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (len <= 1)
		return (1);
	while (base[i] != '\0')
	{
		while (base[j])
		{
			if (base[i] == base[j])
			{
				if (i != j || base[j] == '+' || base[j] == '-')
					return (1);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

void	check_neg(int *nbr)
{
	if (*nbr < 0)
	{
		write(1, "-", 1);
		*nbr = -*nbr;
	}
}

void	reverse_write(int nb, int base_len, char *base)
{
	int	n;

	n = nb / base_len;
	if (n != 0)
		reverse_write(n, base_len, base);
	write(1, &base[nb % base_len], 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;

	len = ft_strlen(base);
	if (check(base, len))
		return ;
	check_neg(&nbr);
	reverse_write(nbr, len, base);
}
