/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afabian- <afabian-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 21:00:12 by afabian-          #+#    #+#             */
/*   Updated: 2024/12/19 21:00:12 by afabian-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_zero(void *s, unsigned int n)
{
    unsigned char *ptr = (unsigned char *)s;
    while (--n)
    {
        *ptr = 0;
    }
}