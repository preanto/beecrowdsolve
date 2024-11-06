#include <iostream>
using namespace std;
int main() {
    char name[50];
    double a , b,s=0,y=0;
    cin>>name>>a>>b;
    s = b*0.15;
    y = s+a;
    printf("TOTAL = R$ %.2lf\n",y);

    return 0;
}
