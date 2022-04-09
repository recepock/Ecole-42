/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aocak <aocak@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 04:34:41 by aocak             #+#    #+#             */
/*   Updated: 2022/02/28 02:30:40 by aocak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
void	ft_type(char s, va_list arguman, int *len);
void	ft_putchar(char c, int *len);
void	ft_putstr(char *s, int *len);
void	ft_puthex(size_t n, int start, int bolen, int *len);

#endif