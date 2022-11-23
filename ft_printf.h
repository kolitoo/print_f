/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourdon <abourdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:04:39 by abourdon          #+#    #+#             */
/*   Updated: 2022/11/22 17:51:01 by abourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int     ft_check_string(const char *str);
char    *ft_strmalup(const char *str);
int     ft_count_struct(char *str);
void	ft_putnbr(int n, int *len);
void    ft_putchar(char c);
void    ft_putstr(char *str, int *len);
void	ft_putnbr_unsigned(unsigned int n, int *len);
void    ft_putnbr_hexa(unsigned int n, char *base, int *len);
void    ft_putvoid(void *ptr, int *len);
int     ft_printf(const char *str, ...);

#endif