/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoumi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 07:52:48 by mdoumi            #+#    #+#             */
/*   Updated: 2022/07/20 10:24:10 by mdoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_is_numeric(char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	singe;
	int	rep;

	singe = 1;
	rep = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '+')
			singe *= 1;
		if (str[i] == '-')
			singe *= -1;
		i++;
	}
	while (ft_is_numeric(str[i]))
	{
		rep = rep * 10 + (str[i] - 48);
		i++;
	}
	return (rep * singe);
}
