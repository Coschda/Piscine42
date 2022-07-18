/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoumi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:17:56 by mdoumi            #+#    #+#             */
/*   Updated: 2022/07/18 09:45:20 by mdoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	is_upp;

	i = 0;
	is_upp = 1;
	while (str[i])
	{
		if ('A' <= str[i] && str[i] <= 'Z')
		{
			is_upp *= 1;
		}
		else
			is_upp *= 0;
		i++;
	}
	return (is_upp);
}
