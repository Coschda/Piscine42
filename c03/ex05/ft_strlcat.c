/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoumi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:58:03 by mdoumi            #+#    #+#             */
/*   Updated: 2022/07/18 20:00:29 by mdoumi           ###   ########.fr       */
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
	int	i;
	int	j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j] && j < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (ft_strlen(dest));
}

int	main()
{
	char a[50] = "Ohaiuoo";
	char b[] = "Boomer";

	int r = strlcat(a, b, 49);

	puts(a);
	printf("%d\n", r);

	char c[50] = "Ohaiuoo";
	char d[] = "Boomer";

	int s = strlcat(c, d, 49);

	puts(c);
	printf("%d", s);


}

/*
Takes : Receveur, Donneur, len autorisée de tout mais n'affecte que la concatenation.
Return : len(a+b)
*/
