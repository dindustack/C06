#include <unistd.h>

int ft_strcmp(char *s1, char *s2)
{
    while (*s1 == *s2 && *s1)
    {
        s1++;
        s2++;
    }

    return (*s1 - *s2);
}

int main(int argc, char **argv)
{
    int i;
    char *arg;

    i = 1;
    while (i < argc)
    {
        while (*argv[i])
        {
            write(1, argv[i], 1);
            argv[i]++;
        }
        i--;
        write(1, "\n", 1);
    }
    return (0);
}