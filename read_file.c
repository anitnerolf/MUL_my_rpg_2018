/*
** EPITECH PROJECT, 2018
** rpg
** File description:
** rpg
*/

#include "my.h"

int	file_size(char *filepath)
{
    int	size = 0;
    struct	stat	st;

    stat(filepath, &st);
    size = st.st_size;
    return (size);
}

char	*read_file(char *filepath)
{
    int	fd = 0;
    int	size = file_size(filepath);
    char	*buffer = malloc(sizeof(char) * (size + 1));

    if (buffer == NULL)
        return (NULL);
    fd = open(filepath, O_RDONLY);
    if (fd < 0)
        return (NULL);
    if (size == 0)
        return (NULL);
    read(fd, buffer, size);
    close(fd);
    buffer[size] = '\0';
    return (buffer);
}
