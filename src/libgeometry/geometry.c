#include <libgeometry/geometry.h>

void parcer(char* str)
{
    char proof_str[] = "circle";
    int i = 0;
    int lenght_circle = strlen(proof_str);
    float x, y, r;
    printf("\n");

    if (strncmp(proof_str, str, lenght_circle) != 0) {
        printf("Error,circle is written incorrectly\n");
        exit(0);
    }
    i = i + lenght_circle;

    while (str[i] == ' ')
        i++;

    if (str[i] != '(') {
        printf("Error, '(' not found after circle) \n");
        exit(0);
    }
    i++;

    while (str[i] == ' ')
        i++;

    if (isdigit(str[i]) == 0) {
        printf("Error, digit was expected\n");
        exit(0);

    } else {
        char* xproof = &str[i];
        x = strtof(xproof, &xproof);
        if (*xproof != ' ') {
            printf("Error, space was expected after '('\n");
            exit(0);
        }
    }
    while (str[i] != ' ')
        i++;

    while (str[i] == ' ')
        i++;

    if (isdigit(str[i]) == 0) {
        printf("Error, digit was expected after x\n");
        exit(0);

    } else {
        char* yproof = &str[i];
        y = strtof(yproof, &yproof);
        if (*yproof != ' ' && *yproof != ',') {
            printf("Error, space or comma was expected after y\n");
            exit(0);
        }
    }
    while ((str[i] != ' ') && (str[i] != ','))
        i++;

    while (str[i] == ' ')
        i++;

    if (str[i] == ',')
        i++;
    else {
        printf("Error, comma was expected after y\n");
        exit(0);
    }

    while (str[i] == ' ') {
        i++;
    }

    if (isdigit(str[i]) == 0) {
        printf("Error, digit was expected after comma\n");
        exit(0);

    } else {
        char* rproof = &str[i];
        r = strtof(rproof, &rproof);
        if (*rproof != ' ' && *rproof != ')') {
            printf("Error, space or ')' was expected after r\n");
            exit(0);
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
        printf("Error, ')' was expected after r\n");
        exit(0);
    }

    while (str[i] == ' ')
        i++;

    if (str[i] == '\0')
        printf("string is correct\n");

    printf("x = %f, y = %f, r = %f\n", x, y, r);
}
