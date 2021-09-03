/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 15:10:14 by zoukaddo          #+#    #+#             */
/*   Updated: 2021/08/26 10:35:31 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_mesure_size(int size, char **strs, char *sep)
{
	int	i;
	int	final_size;

	i = 0;
	final_size = 0;
	if (size <= 0)
		return (1);
	while (i < size)
		final_size += ft_strlen(strs[i++]);
	final_size += (size - 1) * ft_strlen(sep);
	final_size++;
	return (final_size);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	int		final_size;
	char	*ret;

	i = 0;
	final_size = ft_mesure_size(size, strs, sep);
	ret = (char *)malloc(final_size * sizeof(char));
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			ret[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			ret[k++] = sep[j++];
		i++;
	}
	ret[k] = '\0';
	return (ret);
}
