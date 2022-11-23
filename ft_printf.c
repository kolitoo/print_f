/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourdon <abourdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:13:23 by abourdon          #+#    #+#             */
/*   Updated: 2022/11/22 15:13:27 by abourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>

void ft_modulo_check(char c, va_list arg, int *len)
{
        if (c == 'c')
        {
                ft_putchar(va_arg(arg, int));
                *len = *len + 1;
        }       
        else if (c == 's')
                ft_putstr(va_arg(arg, char *), len);
        else if (c == 'p')
                ft_putvoid(va_arg(arg, void *), len);
        else if (c == 'd' || c == 'i')
                ft_putnbr(va_arg(arg, int), len);      
        else if (c == 'u')
                ft_putnbr_unsigned(va_arg(arg, unsigned int), len);
        else if (c == 'x')
                ft_putnbr_hexa(va_arg(arg, int), "0123456789abcdef", len);
        else if (c == 'X')
                ft_putnbr_hexa(va_arg(arg, int), "0123456789ABCDEF", len);
        else if (c == '%')
        {
                ft_putchar('%');
                *len = *len + 1;
        }
}     

int     ft_printf(const char *str, ...)
{
        int     len;
        int     i;
        va_list arg;
        
        len = 0;
        i = 0;
        va_start(arg, str);
        if (ft_check_string(str) == 0)
                return (0);
        while (str[i])
        {
                if (str[i] == '%')
                {
                        i++;
                        ft_modulo_check(str[i], arg, &len);
                }
                else
                {
                        ft_putchar(str[i]);
                        len++;
                }
                i ++;
        }
        return (len);
}

/*
#include <stdio.h>
int     main(void)
{
        int     d = 42;
        //char     e = 'c';
        //char    str[] = "coucou";

        //printf("salut %d ca\n", d);//0 devant octale 0x devant hexa
        printf("%d\n", printf("salut %x %X %% ca\n", d, d));
        printf("%d\n", ft_printf("salut %x %X %% ca\n", d, d));
}*/