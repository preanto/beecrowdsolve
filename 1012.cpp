#include <iostream>
using namespace std;

int main() {

    double a,b,c, pi=3.14159;
    cin>>a>>b>>c;
    printf("TRIANGULO: %.3lf\n", (.5*a*c));
    printf("CIRCULO: %.3lf\n", (pi*c*c));
    printf("TRAPEZIO: %.3lf\n", (.5*c *(a+b)));
    printf("QUADRADO: %.3lf\n", (b*b));
    printf("RETANGULO: %.3lf\n", (a*b));
    return 0;
}
