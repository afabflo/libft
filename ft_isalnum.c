/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afabian- <afabian-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 21:00:49 by afabian-          #+#    #+#             */
/*   Updated: 2024/12/19 21:00:49 by afabian-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_isalnum(int c)
{
    if ((c >= 'A' && c <= 'Z') ||
        (c >= 'a' && c <= 'z') ||
        (c >= '0' && c <= '9'))
    {
        return 1;
    }
    else
        return 0;
}