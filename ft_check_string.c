/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourdon <abourdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:01:40 by abourdon          #+#    #+#             */
/*   Updated: 2022/11/22 13:58:06 by abourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_check_string(const char *str)
{
        int     i;
        int     j;
        char    *symb;

        i = 0;
        symb = "cspdxXiu%";
        if (str == NULL)
                return (0);
        while (str[i])
        {
                if (str[i] == '%')
                {
                        if (str[i + 1] == '%')
                                return (1);
                        j = 0;
                        while (str[i + 1] != symb[j] && symb[j])
                        {
                                j++;
                        }
                        if (symb[j] == '\0')
                                return (0);
                }
                i++;
        }
        return (1);
}
