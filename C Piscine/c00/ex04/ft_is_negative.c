/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:51:31 by ntorres           #+#    #+#             */
/*   Updated: 2019/10/10 01:18:26 by ntorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char a;
	char b;

	a = 'N';
	b = 'P';
	if (n < 0)
		write(1, &a, 1);
	else
		write(1, &b, 1);
}