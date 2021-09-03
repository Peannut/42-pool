/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 10:12:46 by zoukaddo          #+#    #+#             */
/*   Updated: 2021/08/23 08:10:51 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long long	start;
	long long	end;
	long long	mid;

	end = nb;
	start = 0;
	while (start <= end)
	{
		mid = (start + end) / 2;
		if (mid * mid > nb)
			end = mid - 1;
		else if (mid * mid < nb)
			start = mid + 1;
		else
			return (mid);
	}
	return (0);
}
