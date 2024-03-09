/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ispalma- <ispalma-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:42:57 by ispalma-          #+#    #+#             */
/*   Updated: 2024/03/08 14:42:57 by ispalma-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_dispatch(char format, va_list args)
{
	if (format == 'c')
		ft_putchar(va_arg(args, int ));
	else if (format == 's')
		ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		ft_printf_ptr(va_arg(args, void *));
	else if (format == 'd' || format == 'i')
		ft_putnbr(va_arg(args, int ));
	else if (format == 'u')
		ft_putunsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		ft_printf_hex(va_arg(args, long long), format);
	else if (format == '%')
		ft_putchar('%');
	else if (format == "NULL")
	{
		ft_printf("(NULL)");
		return (6);
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	args;

	va_start (args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (ft_strchr("cspdiuxX%", *format))
				ft_dispatch(*format, args);
		}
		else
			ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (0);
}

/*
int main()
{
    char c = 'A';
    char *s = "Hola, mundo!";
    void *p = &c;
    int d = 42;
    unsigned int u = 123;
    int x = 255;
    int X = 255;
    ////original PRINTFS
    printf("%%c: %c\n", c);
    printf("%%s: %s\n", s);
    printf("%%p: %p\n", p);
    printf("%%d: %d\n", d);
    printf("%%i: %i\n", d);
    printf("%%u: %u\n", u);
    printf("%%x: %x\n", x);
    printf("%%X: %X\n", X);
    printf("%%%%: %%\n");
    printf("\n\n");
    //mi ft_printf
    ft_printf("%%c: %c\n", c);
    ft_printf("%%s: %s\n", s);
    ft_printf("%%p: %p\n", p);
    ft_printf("%%d: %d\n", d);
    ft_printf("%%i: %i\n", d);
    ft_printf("%%u: %u\n", u);
    ft_printf("%%x: %x\n", x);
    ft_printf("%%X: %X\n", X);
    ft_printf("%%%%: %%\n");
    ft_printf_hex(-65535, 'x');
    printf("\n\n");
    return 0;
}*/
