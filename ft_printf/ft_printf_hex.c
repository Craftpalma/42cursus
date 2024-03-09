/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ispalma- <ispalma-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:44:59 by ispalma-          #+#    #+#             */
/*   Updated: 2024/03/08 15:02:14 by ispalma-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hex_len(long long n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		len++;
		n = n / 16;
	}
	return (len);
}

static char	*check_x(char spec)
{
	if (spec == 'x' || spec == 'p')
		return ("0123456789abcdef");
	else if (spec == 'X')
		return ("0123456789ABCDEF");
	else
		return (NULL);
}

static void	write_prefix(char spec)
{
	if (spec == 'p')
		write(1, "0x", 2);
}

void	ft_printf_hex( long long n, char spec)
{
	char	*buffer;
	char	*digits;
	int		len;
	int		i;

	len = ft_hex_len(n);
	buffer = malloc(len + 1);
	write_prefix(spec);
	digits = check_x(spec);
	if (buffer == NULL)
		return ;
	i = len;
	buffer[i] = '\0';
	if (n == LLONG_MIN)
		buffer[--i] = digits[(-(n % 16))];
	n = llabs(n);
	if (n == 0)
		buffer[--i] = '0';
	while (n != 0)
	{
		buffer[--i] = digits[n % 16];
		n = n / 16;
	}
	write(1, buffer, len);
	free(buffer);
}
