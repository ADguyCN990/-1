#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define MAXN 200005
int read() {
    int x = 0, neg = 1;
    char op = getchar();
    while (!isdigit(op)) {
        if (op == '-')
            neg = -1;
        op = getchar();
    }
    while (isdigit(op)) {
        x = x * 10 + op - '0';
        op = getchar();
    }
    return neg * x;
}

int n;
int a[MAXN];

void solve() {
    n = read();
    for (int i = 1; i <= n; i++) a[i] = read();
    for (int i = n + 1; i <= 2 * n; i++) a[i] = a[i - n];
    int cnt = 0;
    int pos;
    for (int i = 1; i <= n; i++) {
        if (a[i] == 1) {
            pos = i;
            cnt++;
        }
    }
    if (cnt != 1) {
        puts("NO");
        return;
    }
    for (int i = pos + 1; i < pos + n; i++) {
        if (a[i] - a[i - 1] > 1) {
            puts("NO");
            return;
        }
    }
    puts("YES");
}

int main() {
    int t = read();
    while (t--)
        solve();
    return 0;
}