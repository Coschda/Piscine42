/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoumi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 11:16:06 by mdoumi            #+#    #+#             */
/*   Updated: 2022/07/19 14:21:27 by mdoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	revint(int nb)
{
	int	rep;

	rep = 0;
	while (nb > 0)
	{
		rep = rep * 10 + (nb % 10);
		nb = nb / 10;
	}
	return rep;
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
	while (nbr > len)
	{
		ft_putchar(base[nbr % len]);
		nbr = nbr / len;
	}
	ft_putchar(base[nbr % len]);
}
int	main()
{
	int	a;

	a = 184;
	ft_putnbr_base(a, "0123456789ABCDEF");
}
