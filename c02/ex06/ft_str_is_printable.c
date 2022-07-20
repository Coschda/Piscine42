/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoumi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:45:53 by mdoumi            #+#    #+#             */
/*   Updated: 2022/07/20 09:29:38 by mdoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str)
{
	int	i;
	int	is_print;

	i = 0;
	is_print = 1;
	while (str[i])
	{
		if (str[i] < ' ' || str[i] == 127)
		{
			is_print *= 0;
		}
		else
			is_print *= 1;
		i++;
	}
	return (is_print);
}
