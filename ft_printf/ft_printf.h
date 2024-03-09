/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ispalma- <ispalma-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:42:41 by ispalma-          #+#    #+#             */
/*   Updated: 2024/03/08 14:42:41 by ispalma-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdint.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
int		ft_putstr(char *s);
void	ft_putnbr(int n);
void	ft_putunsigned(unsigned int n);
void	ft_printf_hex(long long n, char spec);
void	ft_printf_ptr(void *ptr);
char	*ft_strchr(const char *str, int c);

#endif
