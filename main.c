/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonahan <mmonahan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 20:31:46 by mmonahan          #+#    #+#             */
/*   Updated: 2019/02/07 16:02:04 by mmonahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main(void)
{
	int		fd;
	char	*str;
	int		i;

	ft_putstr("--test of file\n");
	str = "aaa";
	i = 1;
	fd = open("--test.txt", O_RDONLY);
	while (i > 0)
	{
		i = get_next_line(fd, &str);
		ft_putstr("gnl = ");
		ft_putnbr(i);
		ft_putstr("\t - str = ");
		ft_putstr(str);
		ft_putstr("\n");
	}
	close(fd);

	ft_putstr("--test of error\n");
	str = "aaa";
	i = 1;
	while (i > 0)
	{
		i = get_next_line(10240, &str);
		ft_putstr("gnl = ");
		ft_putnbr(i);
		ft_putstr("\t - str = ");
		ft_putstr(str);
		ft_putstr("\n");
	}

	ft_putstr("--test of descriptor nomber -1\n");
	str = "aaa";
	fd = -1;
	i = 1;
	while (i > 0)
	{
		i = get_next_line(fd, &str);
		ft_putstr("gnl = ");
		ft_putnbr(i);
		ft_putstr("\t - str = ");
		ft_putstr(str);
		ft_putstr("\n");
	}

	ft_putstr("--test of descriptor nomber 5\n");
	str = "aaa";
	fd = 5;
	i = 1;
	while (i > 0)
	{
		i = get_next_line(fd, &str);
		ft_putstr("gnl = ");
		ft_putnbr(i);
		ft_putstr("\t - str = ");
		ft_putstr(str);
		ft_putstr("\n");
	}

	ft_putstr("--test of descriptor nomber 10240\n");
	str = "aaa";
	fd = 10240;
	i = 1;
	while (i > 0)
	{
		i = get_next_line(fd, &str);
		ft_putstr("gnl = ");
		ft_putnbr(i);
		ft_putstr("\t - str = ");
		ft_putstr(str);
		ft_putstr("\n");
	}

	ft_putstr("--test of descriptor nomber 10241\n");
	str = "aaa";
	fd = 10241;
	i = 1;
	while (i > 0)
	{
		i = get_next_line(fd, &str);
		ft_putstr("gnl = ");
		ft_putnbr(i);
		ft_putstr("\t - str = ");
		ft_putstr(str);
		ft_putstr("\n");
	}

	return (0);
}
