/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afabian- <afabian-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 21:01:12 by afabian-          #+#    #+#             */
/*   Updated: 2024/12/19 21:01:12 by afabian-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*strd;
	unsigned const char	*strs;

	if (!dest && !src)
		return (0);
	i = 0;
	strd = (unsigned char *)dest;
	strs = (unsigned const char *)src;
	while (i < n)
	{
		strd[i] = strs[i];
		i++;
	}
	return (dest);
}
