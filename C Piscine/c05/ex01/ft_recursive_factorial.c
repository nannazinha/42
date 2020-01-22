/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 07:28:22 by ntorres           #+#    #+#             */
/*   Updated: 2019/10/23 07:45:12 by ntorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int fat;

	fat = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
		fat *= ft_recursive_factorial(nb - 1);
	return (fat);
}
