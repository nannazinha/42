/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 05:18:34 by ntorres           #+#    #+#             */
/*   Updated: 2019/10/22 23:23:55 by ntorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_strlen(char *str);

int	main(void)
{
	int num;
	char str[30];

	printf("Digite uma string: ");
	gets(str);
	num = ft_strlen(str); 
	printf("A string %s tem %d caracteres.", str, num);
	return (0);
}
