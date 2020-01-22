/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 22:48:39 by ntorres           #+#    #+#             */
/*   Updated: 2019/10/10 13:21:05 by ntorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_div_mod.c"

int	main(void)
{
	int a;
	int b;
	int c;
	int d;
	int *div;
	int *mod;

	a = 25;
	b = 6;
	c = 0;
	d = 0;
	div = &c;
	mod = &d;
	ft_div_mod(a, b, div, mod);
	printf("%d\n", c);
	printf("%d\n", d);
	return (0);
}
