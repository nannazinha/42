/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 12:41:33 by ntorres           #+#    #+#             */
/*   Updated: 2019/10/20 22:07:30 by ntorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __RUSH02_H__
# define __RUSH02_H__

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

int	rush02(char *str);

int	is_valid(char *str);

void	ft_putstr(char *str);

int	ft_strlen(char *str);

void	ft_putstr(char *str);

char	translate(char *str);

/*
**fazer include do dicionario
*/

#endif
