#include <libgeometry/geometry.h>

int main()
{
    int lenght_str = 36;
    FILE* input;
    input = fopen("input.txt", "r");
    if (input == NULL) {
        printf("Error open file\n");
        exit(0);
    }

    char str[lenght_str];
    fgets(str, lenght_str, input);
    fputs(str, stdout);
    parcer(str);
}