#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void ft_bzero(void *s, size_t n)
{
     unsigned char *p;
     size_t         i;

     p = (unsigned char *)s;
     i = 0;
     if (n == 0)
          return;
     while (p[i] != 0 && i < n)
     {
          p[i] = 0;
          i++;
     }
}
/*
int  main(int argc, char *argv[])
{
     (void)argc;
     size_t n;

     n = atoi(argv[2]);
     ft_bzero(argv[1], n);
     bzero(argv[1], n);
     printf("my function %s\n", argv[1]);
     printf("official bzero %s\n", argv[1]);
     return (0);
}*/
     
