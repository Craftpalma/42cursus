/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ispalma- <ispalma-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:44:46 by ispalma-          #+#    #+#             */
/*   Updated: 2024/01/16 19:54:11 by ispalma-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_dst;

	i = 0;
	while (dst[i] && i < dstsize)
	{
		i++;
	}
	len_dst = i;
	if (dstsize == 0)
		return (len_dst + ft_strlen(src));
	j = 0;
	while (src[j] && i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (len_dst < dstsize)
		dst[i] = '\0';
	j = 0;
	while (src[j] != '\0')
		j++;
	return (len_dst + j);
}
