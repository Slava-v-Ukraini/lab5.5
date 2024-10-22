#include <iostream>

using namespace std;

int maxDepth = 0;
int currentDepth = 0;

int Q(int m, int n, int level) {
    if (level > maxDepth) {
        maxDepth = level;
    }

    cout << "Recursion level: " << level << ", m: " << m << ", n: " << n << endl;

    if (m < 0 || n <= 0) {
        cout << "Base case reached at depth " << level << endl;
        return 0;
    }
    if (m == 1 && n == 1) {
        cout << "Base case reached (m = 1, n = 1) at depth " << level << endl;
        return 1;
    }

    if (m == n) {
        return 1 + Q(m, n - 1, level + 1);
    }

    if (m < n) {
        return Q(m, m, level + 1);
    }

    return Q(m, n - 1, level + 1) + Q(m - n, n, level + 1);
}

int main() {
    int m, n;

    cout << "m = "; cin >> m;
    cout << "n = "; cin >> n;

    int result = Q(m, n, 1);

    cout << "Result Q(" << m << ", " << n << "): " << result << endl;
    cout << "Maximum recursion depth: " << maxDepth << endl;

    return 0;
}
