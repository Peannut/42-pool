/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 15:10:48 by zoukaddo          #+#    #+#             */
/*   Updated: 2021/08/18 15:24:47 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void	ft_putchar(char	nb)
{
	write (1, &nb, 1);
}

unsigned int	check(char *base)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (base[i])
	{
		j = 0;
		while (base[i + j])
		{
			j++;
			if (base[i] == base[i + j])
				return (0);
		}
		if (base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	return (i);
}

void	ft_putnbr(int nb, unsigned int base_nb, char *base)
{
	unsigned int	nb2;

	if (nb < 0 )
	{
		write(1, "-", 1);
		nb *= -1;
	}
	nb2 = nb;
	if (nb2 >= base_nb)
	{
		ft_putnbr(nb2 / base_nb, base_nb, base);
		ft_putnbr(nb2 % base_nb, base_nb, base);
	}
	else
	{
		write(1, &base[nb2], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	base_nb;

	base_nb = check(base);
	if (base_nb > 1)
		ft_putnbr(nbr, base_nb, base);
}
