/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 10:06:25 by ntorres           #+#    #+#             */
/*   Updated: 2020/01/22 20:40:07 by ntorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
}

char	*ft_strjoin(char const *s1, char const *s2)
{
}

char	*ft_strtrim(char const *s1, char const *set)
{
}

char	**ft_split(char const *s, char c)
{
}

char	*ft_itoa(int n)
{

}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	char c;
	char *t;

	t = s;
	while (*t != '\0')
	{
		c = *t;
		write(fd, &c, 1);
		t++;
	}
}

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n >= 
	write(fd, , 1);
}
