/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoumi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 06:15:11 by mdoumi            #+#    #+#             */
/*   Updated: 2022/07/20 09:53:36 by mdoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int nb)
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
	if (nbr == 0)
		return (i);
	else
		return (0);
}
