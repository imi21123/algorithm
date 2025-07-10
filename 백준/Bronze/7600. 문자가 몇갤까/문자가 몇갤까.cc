#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {
	//ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	char c[255];

	while (1) {
		int arr[30], cnt = 0;
		fill(arr, arr + 30, 0);
		scanf("%[^\n]", c);
		getchar();
		if (c[0] == '#')
			break;

		for (int i = 0; i < strlen(c); i++) {
			if (c[i] >= 97) //소문자
				arr[c[i] - 97]++;
			else if (c[i] >= 65 && c[i] <= 90) //대문자
				arr[c[i] - 65]++;
		}
		
		for (int i = 0; i < 26; i++)
			if (arr[i] != 0)
				cnt++;
		printf("%d\n", cnt);
	}
}