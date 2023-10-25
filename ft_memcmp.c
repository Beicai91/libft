#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int  ft_memcmp(const void *s1, const void *s2, size_t n)
{
     unsigned char* p1;
     unsigned char* p2;
     size_t         i;

     p1 = (unsigned char*)s1;
     p2 = (unsigned char*)s2;
     i = 0;
     while ((p1[i] != 0 || p2[i] != 0) && i < n)
     {
          if (p1[i] != p2[i])
               return (p1[i] - p2[i]);
          i++;
     }
     return (0);
}
/*
int  main(int argc, char *argv[])
{
     (void)argc;
     size_t n;

     n = atoi(argv[3]);
     printf("my function %d\n", ft_memcmp(argv[1], argv[2], n));
     printf("official memcmp %d\n", memcmp(argv[1], argv[2], n));
     return (0);
}*/
