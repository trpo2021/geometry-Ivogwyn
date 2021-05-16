#include <libgeometry/geometry.h>

int main()
{
    struct circle* c = malloc(sizeof(struct circle));
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
    parcer(str, c);
    printf("x = %f, y = %f, r= %f\n", c->x, c->y, c->r);
    printf("Square of circle = %f\n", Squarecir(c));
    printf("Perimetr of the circle = %f\n", Perimcir(c));
}