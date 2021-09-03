/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 19:40:08 by zoukaddo          #+#    #+#             */
/*   Updated: 2021/08/10 08:17:58 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	swp;

	a = 0;
	while (a < size)
	{
		b = a + 1;
		while (b < size)
		{		
			if (tab[a] > tab[b])
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
