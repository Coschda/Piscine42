/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoumi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:58:30 by mdoumi            #+#    #+#             */
/*   Updated: 2022/07/17 12:10:25 by mdoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	char	d;

	b = 0;
	while (b < 99)
	{
		while (a < 99)
		{
			a++;
			d = '0' + b / 10;
			write(1, &d, 1);
			d = '0' + b % 10;
			write(1, &d, 1);
			write(1, " ", 1);
			d = '0' + a / 10;
			write(1, &d, 1);
			d = '0' + a % 10;
			write(1, &d, 1);
			if (!(a == 99 && b == 98))
				write(1, ", ", 2);
		}
		a = ++b;
	}	
}
int main()
{
	ft_print_comb2();
}
