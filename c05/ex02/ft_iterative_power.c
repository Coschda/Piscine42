/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoumi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:53:40 by mdoumi            #+#    #+#             */
/*   Updated: 2022/07/19 20:00:31 by mdoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	rep;

	i = 0;
	rep = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		rep = nb * rep;
		power--;
	}
	return (rep);
}
