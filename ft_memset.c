/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afabian- <afabian-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 21:01:21 by afabian-          #+#    #+#             */
/*   Updated: 2024/12/19 21:01:21 by afabian-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*strs;

	strs = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		strs[i] = c;
		i++;
	}
	return (s);
}
