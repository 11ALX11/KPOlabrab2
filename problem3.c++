#include <bits/stdc++.h>

using namespace std;

const int VALUES[] = {1, 2, 5, 10};
int values_cnt[] = {0, 0, 0, 0};
int cnt = 0;

void recA(int n, int i) {
    for (; i>=0; i--) {
        if (n-VALUES[i] > 0) {
            recA(n-VALUES[i], i);
        }
        else if (n-VALUES[i] == 0) cnt++;
    }
}

void recB(int n, int i) {
    for (; i>=0; i--) {
        values_cnt[i]++;

        if (n-VALUES[i] > 0) {
            recB(n-VALUES[i], i);
        }
        else if (n-VALUES[i] == 0) {
            for (int j=0; j<4; j++) cout << values_cnt[j] << "\t";
            cout << endl;
        }

        values_cnt[i]--;
    }
}

int main() {

    int n;
    cin >> n;

    recA(n, 3);
    cout << cnt << endl;

    cout << 1 << "\t" << 2 << "\t" << 5 << "\t" << 10 << endl;
    cout << "---------------------------\n";
    recB(n, 3);

    return 0;
}