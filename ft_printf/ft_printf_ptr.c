/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ispalma- <ispalma-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:44:32 by ispalma-          #+#    #+#             */
/*   Updated: 2024/03/08 14:55:49 by ispalma-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr_len( long long n)
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

void	ft_printf_ptr(void *ptr)
{
	char	*buffer;
	int		i;
	int		len;

	len = ft_ptr_len((long long)ptr);
	buffer = malloc(len + 3);
	if (buffer == NULL)
		return ;
	i = len + 2;
	buffer[i] = '\0';
	ft_printf_hex((long long)ptr, 'p');
	write(1, buffer, len + 2);
	free(buffer);
}
/*
int main(void)
{
    int a = 42;
    int x = 255;
    int X = 255;
    ft_printf_ptr((void*)&a);
    write(1,"\n", 1);
       printf("direccion de a: %p\n",(void*)&a);

    ft_printf_hex(32424, 'x'); // Debería mostrar 7e78
    write(1, "\n", 1); // Escribimos un salto de línea
    ft_printf_hex(0, 'X'); // Debería mostrar 0
    write(1, "\n", 1); // Escribimos otro salto de línea
     printf("%%x: %x\n", x);
    printf("%%X: %X\n", X);
    ft_printf_hex(-65535, 'x'); // Debería mostrar ffff0001
    write(1, "\n", 1); // Escribimos otro salto de línea
	return (0);
}*/