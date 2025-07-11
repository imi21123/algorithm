#include <iostream>
using namespace std;

char str[5][15];

int main() {
	int i, j;
	for (i = 0; i < 5; i++)
		scanf("%s", str[i]);
	for (i = 0; i < 15; i++)
		for (j = 0; j < 5; j++) {
			if (str[j][i] == NULL)
				continue;
			else
				printf("%c", str[j][i]);
		}
}