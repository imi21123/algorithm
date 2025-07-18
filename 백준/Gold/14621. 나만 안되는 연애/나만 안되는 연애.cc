#include <iostream>
#include <queue>
using namespace std;

int n, m, u, v, d;
int mst_cost = 0, cnt = 0;
int parent[1005];
char sex[1005];
priority_queue<pair <int, pair<int, int>>> pq;

int find(int x) {
    if (parent[x] == x)
        return x;
    else
        return parent[x] = find(parent[x]);
}
void merge(int a, int b) {
    a = find(a);
    b = find(b);
    if (a == b)
        return;
    parent[b] = a;
}
void kruskal() {
    for (int i = 0; i < m; i++) {
        int a = find(pq.top().second.first);
        int b = find(pq.top().second.second);
        int cost = -pq.top().first;

        int a_sex = pq.top().second.first;
        int b_sex = pq.top().second.second;
        pq.pop();

        if (sex[a_sex] == sex[b_sex]) 
            continue;
        if (a == b) 
            continue;

        merge(a, b);
        mst_cost += cost;
        cnt++;
    }
    if (cnt != n - 1)
        mst_cost = -1;
}
int main() {
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        parent[i] = i;
        cin >> sex[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> u >> v >> d;
        pq.push({ -d, {u, v} });
    }
    kruskal();
    cout << mst_cost;
}