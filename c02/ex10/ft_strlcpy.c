/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoumi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:21:10 by mdoumi            #+#    #+#             */
/*   Updated: 2022/07/18 15:04:06 by mdoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}

	return (ft_strlen(dest));
}

int main()
{
	char	*a;
	char	*b = "Bonjour";

	char	*c;
	char	*d = "Bonjour";

	int	r = strlcpy(a, b, 7);
	int	s = ft_strlcpy(c, d, 7);

	printf("Str1 : %s Str2 : %s Length : %d",a, b, r);
	printf("Str1 : %s Str2 : %s Length : %d",c, d, s);

    return(0);
}
