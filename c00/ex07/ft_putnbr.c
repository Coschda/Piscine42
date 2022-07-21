/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoumi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 12:11:35 by mdoumi            #+#    #+#             */
/*   Updated: 2022/07/18 07:35:04 by mdoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	lenint(int nbr)
{
	if (nbr < 10)
	{
		return (1);
	}	
	else
	{
		return (1 + lenint(nbr / 10));
	}
}

void	int_in_str(char *str, int nb)
{
	int	i;
	int	len;

	len = lenint(nb)-1;
	i = 0;
	while (len >= 0)
	{
		str[len] = '0' + nb % 10;
		nb = nb / 10;
		len--;
	}
}

void	ft_putnbr(int nb)
{
	char	txt[11];
	int		i;

	i = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb == -2147483648)
	{
		write(1, "2147483648", 10);
		return ;
	}
	int_in_str(txt, nb);
	while (i < lenint(nb))
	{
		write(1, &txt[i], 1);
		i++;
	}
}
int main()
{
    ft_putnbr(-214783648);
}
