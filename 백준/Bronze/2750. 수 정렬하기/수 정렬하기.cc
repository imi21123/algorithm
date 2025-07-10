#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int num[1000];
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &num[i]);
    sort(num, num + n);
    for (i = 0; i < n; i++)
        printf("%d\n", num[i]);
}