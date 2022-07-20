/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoumi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 06:49:45 by mdoumi            #+#    #+#             */
/*   Updated: 2022/07/20 07:56:50 by mdoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	smallest_sqrt(int nb)
{
	int	i;
	int	odd;
	int	nbr;

	odd = 1;
	nbr = nb;
	i = 0;
	if (nb < 1)
		return (0);
	while (nbr > 0)
	{
		nbr = nbr - odd;
		i++;
		odd += 2;
	}
	return (i);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	n;

	n = nb;
	if (n == 2)
		return (1);
	if (n % 2 == 0 || n == 1 || n == 0 || n < 0)
		return (0);
	i = 3;
	while (i < smallest_sqrt(n))
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	int	i;

	i = 0;
	while (i < 1001)
	{
		if (ft_is_prime(i))
			printf("%d %d\n", i, ft_is_prime(i));
		i++;
	}
}
