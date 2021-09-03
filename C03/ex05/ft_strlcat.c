/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 19:34:16 by zoukaddo          #+#    #+#             */
/*   Updated: 2021/08/16 11:36:55 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	lenght_dest;
	unsigned int	lenght_src;
	unsigned int	cat;

	i = 0;
	lenght_dest = 0;
	lenght_src = 0;
	while (dest[lenght_dest] != '\0')
		lenght_dest++;
	while (src[lenght_src] != '\0')
		lenght_src++;
	if (size <= lenght_dest)
		return (size + lenght_src);
	cat = lenght_dest;
	while (src[i] && cat < size - 1)
	{
		dest[cat] = src[i];
		i++;
		cat++;
	}
	dest[cat] = 0;
	return (lenght_dest + lenght_src);
}
