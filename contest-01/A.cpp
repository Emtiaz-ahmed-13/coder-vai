#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    string equal = "Yes";
    for (int i = 1; i < n; i++) { 
        if(a[0] != a[i]){ 
            equal = "No";
            break;
        }
    }

    cout << equal << endl;
    return 0;
}
