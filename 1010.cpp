#include <iostream>
using namespace std;
int main() {
    double a1,b1,c1,a2,b2,c2;
    cin>>a1>>b1>>c1;
    cin>>a2>>b2>>c2;
    printf("VALOR A PAGAR: R$ %.2lf\n", (b1*c1 + b2*c2));

    return 0;
}

