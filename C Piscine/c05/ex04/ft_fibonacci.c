/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 08:56:08 by ntorres           #+#    #+#             */
/*   Updated: 2019/10/23 18:59:24 by ntorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	int fib;

	fib = 0;
	if (index < 0)
		fib = -1;
	else if (index == 0)
		fib = 0;
	else if ((index == 1) || (index == 2))
		fib = 1;
	else
		fib = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
	return (fib);
}
