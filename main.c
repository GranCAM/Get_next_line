/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:21:58 by carbon-m          #+#    #+#             */
/*   Updated: 2024/10/28 15:01:37 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	main(void)
{
	int			fd;
	static char	*line;

	fd = open("hola.txt", 0);
	if (fd == 0)
		return (0);
	line = get_next_line(fd);
	printf("\n");
	while (line)
	{
		line = get_next_line(fd);
		printf("%s", line);
		printf("\n");
		free(line);
	}
	close(fd);
	return (0);
}
