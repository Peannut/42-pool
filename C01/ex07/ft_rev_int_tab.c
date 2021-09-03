/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 09:16:02 by zoukaddo          #+#    #+#             */
/*   Updated: 2021/08/09 16:10:10 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swp;

	i = 0;
	while (i < (size / 2))
	{
		swp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = swp;
		i++;
	}
}
