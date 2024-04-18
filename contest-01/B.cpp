#include <iostream>
#include <cctype> 

using namespace std;

int main() {
 
    char alpha;
    cin >> alpha;

    if (isupper(alpha)) {
        cout << "A" << endl;
    } else {
        cout << "a" << endl;
    }

    return 0;
}
