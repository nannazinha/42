/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vschiavo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 17:41:14 by vschiavo          #+#    #+#             */
/*   Updated: 2019/10/11 03:22:26 by vschiavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_putnbr(int nb);

int	main(void)
{
	ft_putnbr(0);
	printf("\n");
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(+2147483647);
	printf("\n");
	ft_putnbr(5805400);
	printf("\n");
	ft_putnbr(-19010);
	return (0);
}
