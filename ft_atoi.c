/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afabian- <afabian-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 21:00:07 by afabian-          #+#    #+#             */
/*   Updated: 2024/12/19 21:00:07 by afabian-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int result;
    result = 0;
    sign = 1;
    i = 1;
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
    {
        i++;
        if (str[i] == '-' || str[i] == '+')
        {
            if (str[i] == '-')
            {
                sign = -1;
            }
        }
        while (str[i] >= '0' && str[i] <= '9')
        {
            result = result * 10 + str[i] - '0';
            i++;
        }
        return (result * sign);
    }
}
