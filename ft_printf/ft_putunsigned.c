/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ispalma- <ispalma-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:41:27 by ispalma-          #+#    #+#             */
/*   Updated: 2024/03/08 14:41:27 by ispalma-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsigned(unsigned int nb)
{
	if (nb > 9)
	{
		ft_putunsigned(nb / 10);
		ft_putunsigned(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}
