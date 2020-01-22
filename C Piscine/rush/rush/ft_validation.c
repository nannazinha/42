/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vschiavo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 16:54:41 by vschiavo          #+#    #+#             */
/*   Updated: 2019/10/13 22:49:04 by ntorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_validation (int tab[6][6], int lin, int col, int num)
{
	int c;
	int l;
	int n;
	int a;

	c = 1;
	l = 1;
	n = 1;
	a = 0;

//Valida se o numero ja existe na coluna
	while (c < col)
	{
		if (tab[lin][c] != num)
				return (1);
		c++;
	}
//valida se o numero ja existe na linha
	while (l < lin)
	{
		if (tab[l][col] != num)
			return (1);
		l++;
	}
//valida restrições listadas na linha a esquerca	
	c = 1;
	if (col == 4)
	{
		a = tab[lin][c];
		while (c < 4)
			{
			    c++;
				if (a < tab[lin][c])
					n++;
					a = tab[lin][c];
			}
		if (n != tab [lin][0] )
			return (1);
	}
//valida restições listadas na liha a direita
	c = 4;
	n = 1;
	if (col == 4)
	{
		a = tab[lin][c];
		while (c > 1)
			{
			    c--;
				if (a < tab[lin][c])
					n++;
					a = tab[lin][c];
			}
		if (n != tab [lin][5] )
			return (1);
	}
//valida restições listadas na coluna a cima
	l = 1;
	n = 1;
	if (lin == 4)
	{
		a = tab[l][col];
		while (l < 4)
			{
			    l++;
				if (a < tab[l][col])
					n++;
					a = tab[l][col];
			}
		if (n != tab [0][col] )
			return (1);
	}
//valida restrições listadas na coluna a baixo
	l = 4;
	n = 1;
	if (lin == 4)
	{
		a = tab[l][col];
		while (l > 1)
			{
			    l--;
				if (a < tab[l][col])
					n++;
					a = tab[l][col];
			}
		if (n != tab [0][col] )
			return (1);
	}
	return (1);


}

//int main (void)
//{
//	return (0);
//}
