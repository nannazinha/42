/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 20:24:35 by ntorres           #+#    #+#             */
/*   Updated: 2019/10/10 13:19:32 by ntorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_ft.c"

int main ()
{
	int a;
	int *nbr;

	nbr = &a;
	a =0; 
	ft_ft(nbr);
	printf("%d\n", a);
	return (0);
}
