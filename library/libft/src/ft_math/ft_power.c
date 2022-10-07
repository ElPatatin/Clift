/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 20:00:31 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/10/07 05:56:44 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

t_ll
	ft_pow(t_ll n, t_unt pow)
{
	if (pow == 0)
		return (1);
	return (n * ft_pow(n, pow - 1));
}
