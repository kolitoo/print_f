/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourdon <abourdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:41:37 by abourdon          #+#    #+#             */
/*   Updated: 2022/11/22 17:24:24 by abourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

void	ft_putnbr(int n, int *len)
{
	if (n == -2147483648)
		ft_putstr("-2147483648", len);
	else
	{
		if (n < 0)
		{
			ft_putchar('-');
			*len = *len + 1;
			n = n * -1;
		}
		if (n > 9)
		{
			ft_putnbr(n / 10, len);
		}
		*len = *len + 1;
		ft_putchar((n % 10) + 48);
	}
}
