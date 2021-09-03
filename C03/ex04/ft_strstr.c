/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 15:39:16 by zoukaddo          #+#    #+#             */
/*   Updated: 2021/08/16 11:20:52 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	o;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		o = 0;
		while (to_find[o] != '\0')
		{
			if (str[i + o] == to_find[o])
			{
				o++;
			}
			else
				break ;
		}
		if (to_find[o] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}
