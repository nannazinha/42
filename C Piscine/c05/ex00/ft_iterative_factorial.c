/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 06:29:39 by ntorres           #+#    #+#             */
/*   Updated: 2019/10/23 07:27:09 by ntorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int fat;

	fat = nb;
	if (nb < 0)
		fat = 0;
	else if (nb == 0)
		fat = 1;
	else
	{
		while (nb > 1)
		{
			fat *= nb - 1;
			nb--;
		}
	}
	return (fat);
}
