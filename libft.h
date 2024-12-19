/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 11:50:07 by dagredan          #+#    #+#             */
/*   Updated: 2024/12/19 20:52:37 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stddef.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
//int ft_isalnum(int c);
//int ft_isascii(int c);
//int ft_isprint(int c);
size_t ft_strlen(const char *s); 

void	*ft_memset(void *s, int c, size_t n);
//void	ft_bzero(void *s, size_t n);

#endif
