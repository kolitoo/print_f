/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourdon <abourdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:20:16 by abourdon          #+#    #+#             */
/*   Updated: 2022/11/22 14:20:32 by abourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

void	ft_putnbr_unsigned(unsigned int n, int *len)
{
	if (n > 9)
	{
		ft_putnbr_unsigned(n / 10, len);
	}
	*len = *len + 1;
	ft_putchar((n % 10) + 48);
}
