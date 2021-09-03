/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 09:22:28 by zoukaddo          #+#    #+#             */
/*   Updated: 2021/08/24 13:57:24 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>
# define 		TRUE 1
# define		FALSE 0
# define		SUCCESS 0
# define		EVEN(a) (a % 2 == 0)
# define		EVEN_MSG "I have an even number of arguments.\n"
# define		ODD_MSG "I have an odd number of arguments.\n"
typedef int	t_bool;
#endif