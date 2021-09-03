/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 11:41:57 by zoukaddo          #+#    #+#             */
/*   Updated: 2021/08/24 12:08:53 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_putnbr(int nb)
{
	 unsigned int	nb2;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	nb2 = nb;
	if (nb2 >= 10)
	{
		ft_putnbr(nb2 / 10);
		ft_putnbr(nb2 % 10);
	}
	else
	{
		nb2 = nb2 + '0';
		write(1, &nb2, 1);
	}	
}

void	ft_pprint(t_stock_str sadge)
{
	ft_putstr(sadge.str);
	ft_putnbr(sadge.size);
	write(1, "\n", 1);
	ft_putstr(sadge.copy);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_pprint(par[i]);
		i++;
	}
}
