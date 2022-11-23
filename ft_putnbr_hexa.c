/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourdon <abourdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:34:42 by abourdon          #+#    #+#             */
/*   Updated: 2022/11/22 17:51:06 by abourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_putnbr_hexa(unsigned int n, char *base, int *len)
{
        unsigned int    nbr;
        
        if (n < 0)
        {
                ft_putchar('-');
                *len = *len + 1;
                nbr = n * -1;
        }
        else
                nbr = n;
        if(nbr > 15)
        {
                ft_putnbr_hexa(nbr / 16, base, len);
        }
        *len = *len + 1;
        ft_putchar(base[nbr % 16]);
}
