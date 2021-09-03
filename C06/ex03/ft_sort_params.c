/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 15:29:59 by zoukaddo          #+#    #+#             */
/*   Updated: 2021/08/22 09:07:59 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	asc_comp(char *s1, char *s2)
{
	int				i;
	unsigned char	*q1;
	unsigned char	*q2;

	q1 = (unsigned char *)s1;
	q2 = (unsigned char *)s2;
	i = 0;
	while (q1[i] == q2[i] && (q1[i] && q2[i]))
	{
		i++;
	}
	return (q1[i] - q2[i]);
}

void	sort(char **tab, int size)
{
	int		a;
	int		b;
	char	*swp;

	a = 1;
	while (a < size)
	{
		b = a + 1;
		while (b < size)
		{		
			if (asc_comp (tab[a], tab[b]) > 0)
			{
				swp = tab[a];
				tab[a] = tab[b];
				tab[b] = swp;
			}
			b++;
		}
		a++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = 1;
	sort(argv, argc);
	while (j < argc)
	{
		i = 0;
		while (argv[j][i])
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		j++;
		write(1, "\n", 1);
	}
}
