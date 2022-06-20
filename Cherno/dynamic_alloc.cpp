#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    using namespace std;
    
    int length;
    cout << "How many names would you like to enter? " << endl;
    cin >> length;
    cout << endl;
    string* names = new string[length];
    for (size_t i = 0; i < length; i++) {
        cout << "Enter name#   " << i + 1 << endl;
        getline(cin >>ws, names[i] );
    }
    sort(names, names + length);
    for (size_t i = 0; i < length; i++) {
        cout << "Name#   " << names[i] << endl;
    }
    delete[] names;
    return 0;
}
