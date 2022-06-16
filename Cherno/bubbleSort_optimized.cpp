#include <iostream>
#include <algorithm>
using namespace std;

void printSize(int array[])
{
    std::cout << sizeof(array) << '\n'; // Error
}

int main()
{
    int array[]{ 6, 3, 2, 9, 7, 1, 5, 4, 8 };
    /*
    sort(begin(array), end(array));
    for (int i{ 0 }; i < static_cast<int>(std::size(array)); ++i)
        std::cout << array[i] << ' ';
    cin.get();
    */
    for (size_t i = 0; i < size(array); i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    for (size_t i = 0; i < size(array) - 1; i++) {
        bool swapped{ false };
        for (size_t j = 0; j < size(array) - 1; j++) {
            if (array[j] > array[j+1]) {
                swap(array[j],array[j+1]);
                swapped = true;
            }
        }
        if (!swapped) {
            cout << "Early termination on iteration: " << " " << i + 1 << endl;
            break;
        }
    }
    cout << endl;
    for (size_t i = 0; i < size(array); i++) {
        cout << array[i] << " ";
    }
    return 0;
}
