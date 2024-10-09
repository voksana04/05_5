#include <iostream>

using namespace std;

int f(int n, int& depth) {
    if (n == 0)
        return 0;
    depth++;
    return n % 10 + f(n / 10, depth);
}

int main() {
    int n;
    int depth = 0; 
    cout << "n = ";
    cin >> n;
    int sum =f(n, depth);

    cout  << sum << endl;
    cout  << depth << endl;

    return 0;
}