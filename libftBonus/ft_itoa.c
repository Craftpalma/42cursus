/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ispalma- <ispalma-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:18:01 by ispalma-          #+#    #+#             */
/*   Updated: 2024/01/23 14:44:02 by ispalma-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_put_value(char *dest, unsigned int n)
{
	if (n < 10)
		*dest = n + '0';
	else
	{
		*dest = n % 10 + '0';
		ft_put_value(dest -1, n / 10);
	}
}

static size_t	ft_num_dig(int n)
{
	size_t	num;

	num = 0;
	while (n)
	{
		n /= 10;
		num++;
	}
	return (num);
}

char	*ft_itoa(int n)
{
	size_t	digits;
	long	abs_value;
	char	*str;

	abs_value = n;
	if (n == 0)
		return (ft_strdup("0"));
	else
	{
		if (n < 0)
			digits = ft_num_dig(n) + 1;
		else
			digits = ft_num_dig(n);
		str = malloc(sizeof(char) * (digits + 1));
		if (!str)
			return (NULL);
		if (n < 0)
			abs_value = -abs_value;
		ft_put_value(str + digits - 1, abs_value);
		if (n < 0)
			*str = '-';
		str[digits] = '\0';
	}
	return (str);
}
