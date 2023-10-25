#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void *ft_memset(void *s, int c, size_t len)
{
     size_t  i;
     unsigned char* p;

     p = (unsigned char*)s;
     i = 0;
     while (i < len)
     {
          p[i] = c;
          i++;
     }
     return (s);
}
/*
int  main(int argc, char *argv[])
{
     (void)argc;

     size_t len = atoi(argv[3]);
     printf("my function %s\n", ft_memset(argv[1], argv[2][0], len));
     printf("the official memset %s", memset(argv[1], argv[2][0], len));
     return (0);
}*/
