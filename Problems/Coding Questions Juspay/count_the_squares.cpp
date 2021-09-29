#include <bits/stdc++.h>

using namespace std;

const int N = 505;
int x[N], y[N];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> x[i] >> y[i];
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            bool f1 = 0, f2 = 0;
            int p1_x = x[i] - y[i] + x[j] + y[j];
            int p2_x = x[i] + y[i] + x[j] - y[j];
            int p1_y = x[i] + y[i] - x[j] + y[j];
            int p2_y = -x[i] + y[i] + x[j] + y[j];
            for (int k = 0; k < n; k++) {
                if (2 * x[k] == p1_x && 2 * y[k] == p1_y) f1 = 1;
                if (2 * x[k] == p2_x && 2 * y[k] == p2_y) f2 = 1;
            }
            cnt += (f1 && f2);
        }
    }
    cout << cnt / 2 << endl;
}