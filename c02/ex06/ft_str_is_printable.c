/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoumi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:45:53 by mdoumi            #+#    #+#             */
/*   Updated: 2022/07/18 11:35:00 by mdoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	is_print;

	i = 0;
	is_print = 1;
	while (str[i])
	{
		if (' ' <= str[i] && str[i] <= '~')
		{
			is_print *= 1;
		}
		else
			is_print *= 0;
		i++;
	}
	return (is_print);
}
