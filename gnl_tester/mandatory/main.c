#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "../../get_next_line_bonus.h"

void	gnl(int fd)
{
	char	*str;

	str = get_next_line(fd);
	if (str)
	{
		if (str[0] == '\n')
		{
			printf("nl     %s", str);
			free(str);
			return ;
		}
		if (str[strlen(str) - 1] == '\n')
			printf("nl     %s", str);
		else
			printf("       %s", str);
		if (str[strlen(str) - 1] != '\n')
			printf("\n");
		
		free(str);
	}
	else
		printf("NULL\n");
}

int	count_line(char *file)
{
	char	buff[1];
	int	fd = open(file, O_RDONLY);
	int	rs;
	int	count;

	if (fd < 0)
		return (0);
	rs = 1;
	count = 0;
	while (rs > 0)
	{
		rs = read(fd, buff, 1);
		if (rs == 0)
			return (close(fd), count + 1);
		if (buff[0] == '\n')
			count++;
	}
	return (close(fd), count);
}

void	label(int file)
{
	printf("\033[0;33m\nFILE %d.txt ------------------>\033[0m\n", file);
}

void	show_line(int line, int file)
{
	char command[256];

	printf("\033[0;32mLine%d: ", line);
	fflush(stdout);
	snprintf(command, sizeof(command),
	"echo \"\\033[0;32m$(sed -n %dp %d.txt | cat -e)\\033[0m\"", line, file);
	system(command);
}

int	main(void)
{
	int		fd1, fd2, fd3, l1, l2, l3;
	int		file;
	int		line;

	l1 = count_line("1.txt");
	l2 = count_line("2.txt");
	l3 = count_line("3.txt");
	if (!l1 || !l2 || !l3)
		return (printf("\033[0;31mName the files correctly 1.txt / 2.txt/ 3.txt\n\033[0m"), 1);
	fd1 = open("1.txt", O_RDONLY);
	fd2 = open("2.txt", O_RDONLY);
	fd3 = open("3.txt", O_RDONLY);
	file = 1;
	line = 1;

	label(file);
	while (line <= l1 + 1)
	{
		show_line(line, file);
		gnl(fd1);
		line++;
	}
	line = 1;
	file++;
	label(file);
	while (line <= l2 + 1)
	{
		show_line(line, file);
		gnl(fd2);
		line++;
	}
	line = 1;
	file++;
	label(file);
	while (line <= l3 + 1)
	{
		show_line(line, file);
		gnl(fd3);
		line++;
	}

	close(fd1);
	close(fd2);
	close(fd3);
	return (0);
}
