/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvoid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourdon <abourdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:17:08 by abourdon          #+#    #+#             */
/*   Updated: 2022/11/22 18:00:21 by abourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_putnbr_hexa2(unsigned long long int n, char *base, int *len)
{
        if(n > 15)
        {
                ft_putnbr_hexa2(n / 16, base, len);
        }
        *len = *len + 1;
        ft_putchar(base[n % 16]);
}

void    ft_putvoid(void *ptr, int *len)
{
        unsigned long long int    i;

        if (!ptr)
        {
                write (1, "(nil)", 5);
                *len = *len + 5;
        }
        else
        {
                i = (unsigned long long int) ptr;
                ft_putchar('0');
                ft_putchar('x');
                *len = *len + 2;
                ft_putnbr_hexa2(i, "0123456789abcdef", len);
        }
}

