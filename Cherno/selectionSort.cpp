#include <iostream>
#include <algorithm>
using namespace std;

void printSize(int array[])
{
    std::cout << sizeof(array) << '\n'; // Error
}

int main()
{
    int array[]{ 15, 1, 2, 3, 5, 8, 13, 3,2, 21 };
    /*
    sort(begin(array), end(array));
    for (int i{ 0 }; i < static_cast<int>(std::size(array)); ++i)
        std::cout << array[i] << ' ';
    cin.get();
    */
    for (size_t i = 0; i < size(array); i++) {
        cout << array[i] << " ";
    }
    for (size_t i = 0; i < size(array); i++) {
        for (size_t j = i+1; j < size(array); j++) {
            if (array[i] > array[j]) {
                swap(array[i],array[j]);
            }
        }
    }
    cout << endl;
    for (size_t i = 0; i < size(array); i++) {
        cout << array[i] << " ";
    }
    return 0;
}
