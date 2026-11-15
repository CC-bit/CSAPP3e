#include <stdio.h>

int main(int argc, char** argv)
{    
    char *input_string = argv[argc-1];
    int a,b;
    int ret = sscanf(input_string,"%d, %d", &a, &b);
    argv[0] = '\0'; // NOOP to force gcc to generate a callq instead of jmp
    return a+b;
}