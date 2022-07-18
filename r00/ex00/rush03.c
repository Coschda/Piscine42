/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoumi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 12:25:48 by mdoumi            #+#    #+#             */
/*   Updated: 2022/07/17 16:09:29 by mdoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);
void	border(int x);
void	middle(int x);

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (y > 0)
	{
		while (i < y)
		{
			if (i == 0 || i == y - 1)
				border(x);
			else if (y != 0)
				middle(x);
			i++;
		}
	}
}

void	border(int x)
{
	int	i;

	if (x > 0)
	{
		ft_putchar('A');
		i = 1;
		while (i < x - 1)
		{
			ft_putchar('B');
			i++;
		}
		if (x > 1)
			ft_putchar('C');
		ft_putchar('\n');
	}
}

void	middle(int x)
{
	int	i;

	if (x > 0)
	{
		ft_putchar('B');
		i = 1;
		while (i < x - 1)
		{
			ft_putchar(' ');
			i++;
		}
		if (x > 1)
			ft_putchar('B');
		ft_putchar('\n');
	}	
}
