#include <unistd.h>

int main(int argc, char **argv)
{
    int i;

    i = 1;
    if (argc > 1)
    {
        while (i < argc)
        {
            while (*argv[i])
            {
                write(1, argv[i], 1);
                argv[i]++;
            }
            i++;
            write(1, "\n", 1);
        }
    }
    return (0);
}