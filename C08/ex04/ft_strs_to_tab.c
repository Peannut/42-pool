/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 10:39:48 by zoukaddo          #+#    #+#             */
/*   Updated: 2021/08/25 15:20:35 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*P;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(str) + 1;
	P = (char *)malloc(sizeof(char) * len);
	if (P == 0)
		return (0);
	while (str[i])
	{
		P[i] = str[i];
		i++;
	}
	P[i] = 0;
	return (P);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*lol;
	int			i;

	lol = (t_stock_str *) malloc(sizeof(t_stock_str) * (ac + 1));
	if (lol == 0)
		return (0);
	i = 0;
	while (i < ac && av[i])
	{
		lol[i].size = ft_strlen(av[i]);
		lol[i].str = av[i];
		lol[i].copy = ft_strdup(av[i]);
		i++;
	}
	lol[i].str = 0;
	return (lol);
}
