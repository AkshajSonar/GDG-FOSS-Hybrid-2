#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long n, m, a, b;
    cin >> n >> m >> a >> b;
    
    long long cost = min(n * a, ((n + m - 1) / m) * b);
    
    cout << cost << endl;
    return 0;
}