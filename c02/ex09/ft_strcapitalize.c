/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoumi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 12:30:08 by mdoumi            #+#    #+#             */
/*   Updated: 2022/07/19 07:24:44 by mdoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char	*ft_strcapitalize(char *str)
{
	int		wc;
	char	*st;

	wc = 0;
	st = str;
	while (*st)
	{
		if (wc == 0 && 'a' <= *st && *st <= 'z')
			*st -= 32;
		if (wc != 0 && 'A' <= *st && *st <= 'Z')
			*st += 32;
		if (!('a' <= *st && *st <= 'z' 
			|| 'A' <= *st && *st <= 'Z'))
			wc = 0;
		else
			wc++;
		st++;
	}
	return (str);
}
int	main()
{
	char	a[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(a);
	printf("%s", a);
}
