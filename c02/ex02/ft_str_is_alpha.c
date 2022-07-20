/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoumi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 07:48:51 by mdoumi            #+#    #+#             */
/*   Updated: 2022/07/20 09:24:41 by mdoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	int	i;
	int	is_alpha;

	i = 0;
	is_alpha = 1;
	while (str[i])
	{
		if (('a' <= str[i] && str[i] <= 'z')
			|| ('A' <= str[i] && str[i] <= 'Z'))
		{
			is_alpha *= 1;
		}
		else
			is_alpha *= 0;
		i++;
	}
	return (is_alpha);
}
