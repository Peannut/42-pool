/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 14:52:15 by zoukaddo          #+#    #+#             */
/*   Updated: 2021/08/21 15:14:17 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	p;
	int	d;

	if (ac > 1)
	{
		p = 1;
		while (p < ac)
		{
			d = 0;
			while (av[p][d])
			{
				ft_putchar(av[p][d]);
				d++;
			}
			ft_putchar('\n');
			p++;
		}
	}
	return (0);
}
