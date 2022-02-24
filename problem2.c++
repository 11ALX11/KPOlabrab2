#include <bits/stdc++.h>

using namespace std;

int notRec(int n) {
    int prev1=1, prev2=1, ans;
    if (n <= 2) return 1;

    for (int i=3; i<=n; i++) {
        ans=prev1+prev2;

        prev1=prev2;
        prev2=ans;
    }

    return ans;
}

int doRec(int n, int currently=3, int prev1=1, int prev2=1) {
    if (n <= 2) return 1;
    if (n==currently) return prev1+prev2;

    return doRec(n, ++currently, prev2, prev1+prev2);
}

int main() {

    int n, ans;
    cin >> n;

    ans = doRec(n);
    cout << ans << endl;
    ans = notRec(n);
    cout << ans << endl;

    return 0;
}
