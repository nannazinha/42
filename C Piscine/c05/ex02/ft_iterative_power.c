/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 07:47:03 by ntorres           #+#    #+#             */
/*   Updated: 2019/10/23 08:26:43 by ntorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int pow;

	pow = 1;
	if (power < 0)
		pow = 0;
	else if (power == 0)
		pow = 1;
	else
	{
		while (power > 0)
		{
			pow *= nb;
			power--;
		}
	}
	return (pow);
}
