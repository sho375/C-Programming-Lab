#include <math.h>
#include <stdio.h>
int main() {
    double a, b, c, d, root1, root2;
    printf("Enter coefficients a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);

    d = b * b - 4 * a * c;
    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("root1 = %d and root2 = %2d", root1, root2);
    }
    else if (d == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %2lf;", root1);
    }
     return 0;
}
