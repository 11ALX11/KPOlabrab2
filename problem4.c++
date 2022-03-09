#include <bits/stdc++.h>

using namespace std;

bool isThere3(int *ArrayOfIns) {
    for (int i=0; i<12; i++) {
        if (ArrayOfIns[i]==3) return false;
    }
    return true;
}

int main() {

    int ArrayOfMarks[12];
    for (int i=0; i<12; i++) cin >> ArrayOfMarks[i];

    if (isThere3(ArrayOfMarks)) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }

    return 0;
}