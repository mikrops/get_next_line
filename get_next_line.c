/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonahan <mmonahan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 21:05:18 by mmonahan          #+#    #+#             */
/*   Updated: 2019/01/19 04:52:32 by mmonahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "get_next_line.h"

/*
**	1	- строка была прочитана
**	0	- считывание завершенно
**	-1	- ошибка чтения
*/

int	get_next_line(const int fd, char **line)
{

	static char	cd[2147483647];	//статическая переменная для бонуса
	size_t		ret;
	char		buf[BUF_SIZE + 1];
	char		*tmp;

	if (fd < 0 || !line)
		return (0);

	ret = read(fd, buf, BUF_SIZE); // в ret харниться количество считанных байт
	tmp = ft_strchr(buf, '\n'); // tmp указывает на конец строки в buf или NULL;

	ft_strcpy(cd, buf); // в cd теперь храниться строка из buf


	close(fd);
	return (!(!fd && !ft_strlen(line[0]))); //	в итоге 1 или 0
}

void ft_display_file(char *av)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(av, O_RDONLY);
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
		ft_putstr("_?_");
	}
	close(fd);
}

int main(int argc, char **argv)
{
	if (argc < 2)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else
		ft_display_file(argv[1]);
	return (0);
}
