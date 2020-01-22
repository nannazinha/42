/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 21:15:52 by ntorres           #+#    #+#             */
/*   Updated: 2019/10/24 12:14:23 by ntorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	float sqrt;
	float temp;

	temp = 0;
	if (nb < 0)
		return (0);
	else if ((nb == 0) || (nb == 1))
		return (nb);
	else
	{
		sqrt = nb / 2;
		while (sqrt != temp)
		{
			temp = sqrt;
			sqrt = (nb / temp + temp) / 2;
		}
		return (sqrt);
	}
}
