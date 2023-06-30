#include <iostream>
using namespace std;

int main() {
    int count = 0;
    int n;
    cin>>n;

    do {
        cout << "Count: " << count << endl;
        count++;
    } while (count <= n);

    return 0;
}
