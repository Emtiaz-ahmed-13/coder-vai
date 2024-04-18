#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,c;
    cin >> n >> c;

    vector<int> h(n);
    for (int i = 0; i < n; ++i) {
        cin >> h[i];
    }


    for (int i = 0; i < n; ++i) {
        h[i] += 2 * c;
    }

    for (int i = 0; i < n; ++i) {
        cout << h[i] << " ";
    }
    cout << endl;

    return 0;
}
