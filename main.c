/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonahan <mmonahan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 20:31:46 by mmonahan          #+#    #+#             */
/*   Updated: 2019/02/05 20:32:26 by mmonahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main(void)
{
	int		fd;
	char	*str;
	int		i;

	str = "aaa";
	i = 1;
	fd = open("test.txt", O_RDONLY);
	while (i)
	{
		i = get_next_line(fd, &str);
		ft_putstr(str);
	}
	close(fd);
	return (0);
}
