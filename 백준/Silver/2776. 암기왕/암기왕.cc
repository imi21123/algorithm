#include <iostream>
#include <algorithm>
using namespace std;

int num[1000005];
int binary_search(int left, int right, int ans) {
    int mid;
    while(left<=right){
        mid = (left+right)/2;
        if(num[mid]<ans)left=mid+1;
        else if(num[mid]>ans)right=mid-1;
        else return 1;
    }
    return 0;
}
int main() {
   int t, n, m;
   scanf("%d", &t);
   for (int i = 0; i < t; i++) {
      scanf("%d", &n);
      for (int j = 0; j < n; j++)
         scanf("%d", &num[j]);
      sort(num, num + n);
      scanf("%d", &m);
      for (int j = 0; j < m; j++) {
         int ans;
         scanf("%d", &ans);
         printf("%d\n", binary_search(0, n - 1, ans));
      }
   }
   return 0;
}