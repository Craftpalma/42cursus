/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ispalma- <ispalma-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:22:19 by ispalma-          #+#    #+#             */
/*   Updated: 2024/03/08 16:43:18 by ispalma-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_slen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
	{
		++len;
	}
	return (len);
}

int	ft_putstr(char *s)
{
	if (s == NULL)
	{
		ft_printf("(NULL)");
		return (6);
	}
	write(1, s, ft_slen(s));
	return (0);
}
