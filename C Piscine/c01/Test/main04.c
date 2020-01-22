/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 23:27:20 by ntorres           #+#    #+#             */
/*   Updated: 2019/10/10 13:21:35 by ntorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_ultimate_div_mod.c"

int main(void)
{
	int x;
	int y;
	int *a;
	int *b;

	x = 36;
	y = 5;
	a = &x;
	b = &y;
	printf("%d\n", x);
	printf("%d\n", y);
	ft_ultimate_div_mod(a, b);
	printf("%d\n", x);
	printf("%d\n", y);
	return (0);
}
