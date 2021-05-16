#include <libgeometry/geometry.h>

void parcer(char* str, struct circle* c)
{
    char proof_str[] = "circle";
    int i = 0;
    int lenght_circle = strlen(proof_str);
    printf("\n");

    if (strncmp(proof_str, str, lenght_circle) != 0) {
        printf("Error 1,circle is written incorrectly\n");
        exit(1);
    }
    i = i + lenght_circle;

    while (str[i] == ' ')
        i++;

    if (str[i] != '(') {
        printf("Error 2, '(' not found after circle) \n");
        exit(2);
    }
    i++;

    while (str[i] == ' ')
        i++;

    if (isdigit(str[i]) == 0) {
        printf("Error 3, digit was expected after '('\n");
        exit(3);

    } else {
        char* xproof = &str[i];
        c->x = strtof(xproof, &xproof);
        if (*xproof != ' ') {
            printf("Error 4, space was expected after '('\n");
            exit(4);
        }
    }
    while (str[i] != ' ')
        i++;

    while (str[i] == ' ')
        i++;

    if (isdigit(str[i]) == 0) {
        printf("Error 5, digit was expected after x\n");
        exit(5);

    } else {
        char* yproof = &str[i];
        c->y = strtof(yproof, &yproof);
        if (*yproof != ' ' && *yproof != ',') {
            printf("Error, 6 space or comma was expected after y\n");
            exit(6);
        }
    }
    while ((str[i] != ' ') && (str[i] != ','))
        i++;

    while (str[i] == ' ')
        i++;

    if (str[i] == ',')
        i++;
    else {
        printf("Error 7, comma was expected after y\n");
        exit(7);
    }

    while (str[i] == ' ') {
        i++;
    }

    if (isdigit(str[i]) == 0) {
        printf("Error 8, digit was expected after comma\n");
        exit(8);

    } else {
        char* rproof = &str[i];
        c->r = strtof(rproof, &rproof);
        if (*rproof != ' ' && *rproof != ')') {
            printf("Error 9, space or ')' was expected after r\n");
            exit(9);
        }
    }

    while ((str[i] != ' ') && (str[i] != ')')) {
        i++;
    }

    while (str[i] == ' ')
        i++;

    if (str[i] == ')')
        i++;
    else {
        printf("Error 10, ')' was expected after r\n");
        exit(10);
    }

    while (str[i] == ' ')
        i++;

    if (str[i] == '\0')
        printf("string is correct\n");
}

float Squarecir(struct circle* c)
{
    const float pi = 3.1415;
    float s;
    s = pi * c->r * c->r;
    return s;
}

float Perimcir(struct circle* c)
{
    const float pi = 3.1415;
    float p;
    p = 2 * pi * c->r;
    return p;
}