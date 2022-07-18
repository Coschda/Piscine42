/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoumi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:20:51 by mdoumi            #+#    #+#             */
/*   Updated: 2022/07/18 17:57:15 by mdoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strlen(char	*s)
{
	int	len;

	len = 0;
	while (s[len])
	{
		len++;
	}
	return (len);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	len;
	int	wc;
	int	i;
	int	j;

	i = 0;
	len = ft_strlen(to_find);
	printf("%d\n", len);
	if (len == 0)
		return (str);
	while (str[i])
	{
		wc = 0;
		if (str[i] == to_find[wc])
		{
			j = i;
			while (str[j++] == to_find[wc])
			{
				if (wc++ == len -1)
					return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}
