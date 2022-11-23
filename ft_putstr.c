/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourdon <abourdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:42:57 by abourdon          #+#    #+#             */
/*   Updated: 2022/11/22 11:43:00 by abourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_putstr(char *str, int *len)
{
        if (!str)
        {
                write (1, "(null)", 6);
                *len = *len + 6;
        }
        else
        {
                int     i;

                i = 0;
                while (str[i])
                {
                        ft_putchar(str[i]);
                        *len = *len + 1;
                        i++;
                }
        }
}