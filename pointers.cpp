#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6};

    for (int i = 0; i < v.size(); ++i) 
        cout << v[i] << " ";

    cout << endl;
    for (int x : v)
        cout << x << " ";
    
    cout << endl;

    auto b = v.begin();
    auto e = v.end();
    for (; b != e; ++b) {
        cout << *b << " ";
    }
}