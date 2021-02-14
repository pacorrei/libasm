#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

ssize_t	ft_write(int fd, const void *buf, size_t count);
ssize_t	ft_read(int fd, void *buf, size_t count);
size_t	ft_strlen(const char *str);
char    *ft_strcpy(char *dest, const char *src);
int     ft_strcmp(const char *s1, const char *s2);
char    *ft_strdup(const char *s);

int main()
{


    printf("-----------FT_WRITE------------\n");

    errno = 0;
	printf("write : %ld", write(1, "hello!\n", 7));
	printf(" errno : %d\n", errno);
    errno = 0;
	printf("ft_write : %ld", ft_write(1, "hello!\n", 7));
	printf(" errno : %d\n\n\n", errno);
    errno = 0;
	printf("write : %ld", write(-5, "", 0));
	printf(" errno : %d\n", errno);
    errno = 0;
	printf("ft_write : %ld", ft_write(-5, "", 0));
	printf(" errno : %d\n\n\n", errno);
    errno = 0;
	printf("write : %ld", write(-5, "hello!\n", 7));
	printf(" errno : %d\n", errno);
    errno = 0;
	printf("ft_write : %ld", ft_write(-5, "hello!\n", 7));
	printf(" errno : %d\n\n\n", errno);
     errno = 0;
	printf("write : %ld", write(1, "hello!\n", -5));
	printf(" errno : %d\n", errno);
    errno = 0;
	printf("ft_write : %ld", ft_write(1, "hello!\n", -5));
	printf(" errno : %d\n\n\n", errno);


    printf("-----------FT_READ------------\n");

    ssize_t ret_read;
    char    buf[5000];
    int     fd;
    fd = open("Makefile", O_RDONLY);

    errno = 0;
    ret_read = read(fd, buf, 42);
    printf(", errno : %d\n", errno);
	buf[ret_read] = '\0';
	printf("read: |%s|\nreturn : [%zd]\n\n", buf, ret_read);
    errno = 0;
    ret_read = ft_read(fd, buf, 42);
    printf(", errno : %d\n", errno);
    buf[ret_read] = '\0';
    printf("ft_read: |%s|\nreturn : [%zd]\n\n", buf, ret_read);
    errno = 0;
    ret_read = read(fd, buf, -10);
    printf(", errno : %d\n", errno);
	buf[ret_read] = '\0';
	printf("read: |%s|\nreturn : [%zd]\n\n", buf, ret_read);
    errno = 0;
    ret_read = ft_read(fd, buf, -10);
    printf(", errno : %d\n", errno);
    buf[ret_read] = '\0';
    printf("ft_read: |%s|\nreturn : [%zd]\n\n", buf, ret_read);
    errno = 0;
    ret_read = read(-5, buf, 42);
    printf(", errno : %d\n", errno);
	buf[ret_read] = '\0';
	printf("read: |%s|\nreturn : [%zd]\n\n", buf, ret_read);
    errno = 0;
    ret_read = ft_read(-5, buf, 42);
    printf(", errno : %d\n", errno);
    buf[ret_read] = '\0';
    printf("ft_read: |%s|\nreturn : [%zd]\n\n", buf, ret_read);



    printf("-----------FT_STRLEN------------\n");

    printf("strlen :%zd \n\n", strlen("Hello World!"));
    printf("ft_strlen :%zd \n\n", ft_strlen("Hello World!"));
    printf("strlen :%zd \n\n", strlen(""));
    printf("ft_strlen :%zd \n\n", ft_strlen(""));
    printf("strlen :%zd \n\n", strlen("This must be a pretty long char but i don't know what to write in it!"));
    printf("ft_strlen :%zd \n\n", ft_strlen("This must be a pretty long char but i don't know what to write in it!"));



    printf("-----------FT_STRCPY------------\n");

    char str1[] = "Hello World!";
    char str2[] = "Goodbye then";
    char str3[] = "lourd";
    char str4[] = "leger";
    char str5[] = "This must be a pretty long char but i don't know what to write in it!";
    char str6[] = "";


    printf("strcpy: %s\n\n", strcpy(str1, str2));
    printf("ft_strcpy: %s\n\n", ft_strcpy(str1, str2));
    printf("strcpy: %s\n\n", strcpy(str3, str4));
    printf("ft_strcpy: %s\n\n", ft_strcpy(str3, str4));
    printf("strcpy: %s\n\n", strcpy(str5, str6));
    printf("ft_strcpy: %s\n\n", ft_strcpy(str5, str6));
    printf("strcpy: %s\n\n", strcpy(str6, str5));
    printf("ft_strcpy: %s\n\n", ft_strcpy(str6, str5));



    printf("-----------FT_STRCMP------------\n");


    char	*src;
	char	*dest;
    src = malloc(500);
	dest = malloc(500);
    memcpy(dest, "1234", 5);
	memcpy(src, "1234", 5);

    printf("strcmp: %d\n\n", strcmp(src, dest));
    printf("ft_strcmp: %d\n\n", ft_strcmp(src, dest));

    memcpy(dest, "1234", 5);
	memcpy(src, "123", 4);  
    printf("strcmp: %d\n\n", strcmp(src, dest));
    printf("ft_strcmp: %d\n\n", ft_strcmp(src, dest));    

    memcpy(dest, "123", 4);
	memcpy(src, "1234", 5);  
    printf("strcmp: %d\n\n", strcmp(src, dest));
    printf("ft_strcmp: %d\n\n", ft_strcmp(src, dest));

    memcpy(dest, "1234", 5);
	memcpy(src, "12345", 6);  
    printf("strcmp: %d\n\n", strcmp(src, dest));
    printf("ft_strcmp: %d\n\n", ft_strcmp(src, dest));

    memcpy(dest, "12345", 6);
	memcpy(src, "1234", 5);  
    printf("strcmp: %d\n\n", strcmp(src, dest));
    printf("ft_strcmp: %d\n\n", ft_strcmp(src, dest));




    printf("-----------FT_STRDUP------------\n");


    char    *dst;
    char    *dst2;


    dst = strdup("aaaaaa");
    printf("strdup: %s\n\n", dst);
    dst2 = ft_strdup("aaaaaa");
    printf("ft_strdup: %s\n\n", dst2);


    dst = strdup("");
    printf("strdup: %s\n\n", dst);
    dst2 = ft_strdup("");
    printf("ft_strdup: %s\n\n", dst2);


    dst = strdup("This must be a pretty long char but i don't know what to write in it!");
    printf("strdup: %s\n\n", dst);
    dst2 = ft_strdup("This must be a pretty long char but i don't know what to write in it!");
    printf("ft_strdup: %s\n\n", dst2);



    return (0);
}