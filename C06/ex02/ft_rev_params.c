/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 15:15:27 by zoukaddo          #+#    #+#             */
/*   Updated: 2021/08/21 15:20:29 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	s;
	int	c;

	if (argc > 1)
	{
		s = argc - 1;
		while (s > 0)
		{
			c = 0;
			while (argv[s][c])
			{
				ft_putchar(argv[s][c]);
				c++;
			}
			ft_putchar('\n');
			s--;
		}
	}
}
