#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    printf("%d\n%d", (a + b + c + d) / 60, (a + b + c + d) % 60);
}