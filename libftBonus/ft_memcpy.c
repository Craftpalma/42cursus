/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ispalma- <ispalma-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:40:39 by ispalma-          #+#    #+#             */
/*   Updated: 2024/01/23 15:57:03 by ispalma-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = dst;
	s = (char *)src;
	if (dst == NULL && src == NULL)
		return (0);
	while (n--)
		*d++ = *s++;
	return (dst);
}
