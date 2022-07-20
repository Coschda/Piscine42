/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoumi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:58:03 by mdoumi            #+#    #+#             */
/*   Updated: 2022/07/20 19:04:54 by mdoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	j;
	int				len;

	len = ft_strlen(dest);
	i = ft_strlen(dest);
	j = 0;
	while (src[j] && i +1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (size != 0 && len < size)
		dest[i] = '\0';
	if (size < len)
		return (len + ft_strlen(src) - (len - size));
	return (len + ft_strlen(src));
}
