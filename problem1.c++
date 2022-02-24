#include <bits/stdc++.h>

using namespace std;

bool comp(string a, string b) {
    if (a.find("0b") != 0) cout << a << " missing 0b" << endl;
    if (b.find("0b") != 0) cout << b << " missing 0b" << endl;
    
    a.erase(0, 2);
    b.erase(0, 2);

    int size = max(a.size(), b.size());

    a.insert(0, size-a.size(), '0');
    b.insert(0, size-b.size(), '0');

    for (int i=0; i<size; i++) {
        if (a[i] < b[i]) return true;
    }

    return false;
}

void sortBub(string *A, int n ) {
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-1; j++) {
            if (comp(A[j], A[j+1])) {
                string tmp = A[j];
                A[j] = A[j+1];
                A[j+1] = tmp;
            }
        }
    }
}

int main() {

    int n;
    string A[200];

    cin >> n;
    for (int i=0; i<n; i++) cin >> A[i];

    sortBub(A, n);

    for (int i=0; i<n; i++) cout << A[i] << ' ';
    cout << endl;

    return 0;
}