#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>

ssize_t	ft_write(int fd, const void *buf, size_t count);
ssize_t	ft_read(int fd, void *buf, size_t count);
size_t	ft_strlen(const char *str);
char    *ft_strcpy(char *dest, const char *src);
int     ft_strcmp(const char *s1, const char *s2);
char    *ft_strdup(const char *s);

int main()
{
    char	*src;
	char	*dest;
    src = malloc(19);
	dest = malloc(19);
    memcpy(dest, "hello world", 12);
	memcpy(src, "bonan tagon mondo", 18);
    //memcpy(dest, "bonan tagon mondo", 18);
    //ssize_t ret_read;
    //char    buf[5000];
    //int     fd;
    //fd = open("test.s", O_RDONLY);
    //printf("%s", test("Hello World!"));
    //ft_write(1, "Hello World!", 12);
    //ret_read = read(fd, buf, 42);
	//buf[ret_read] = '\0';
	//printf("|%s|\nreturn : [%zd]\n\n", buf, ret_read);
    //ret_read = ft_read(fd, buf, 42);
    //buf[ret_read] = '\0';
    //printf("|%s|\nreturn : [%zd]\n\n", buf, ret_read);
    //printf("%zd", ft_strlen(""));
    //printf("return : |%s|\n\n", strcpy(src, dest));
    //printf("return : |%s|\n\n", ft_strcpy(src, dest));
    //printf("return : |%s|\n\n", ft_strdup(src));
    return (0);
}