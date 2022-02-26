/*Find the min and max and average of 15 numbers that a user will input.
**The numbers range from 0 to 100. 
**We will do it now for practice and again later when we learn arrays and 
**functions. So you do not have to keep all fifteen numbers stored in memory.
**HINT: you will need to use scanf for input text.
*/

#include <iostream>
#include <string>
#include <cstddef>

using namespace std;

int main(){
    float arr[15] = {};
    float min;
    float max;
    for(size_t i = 0; i<15; i++){
        cin>> arr[i];
    }
    min = arr[0];
    max = arr[0];
    float sum = 0;
    for(size_t i = 0; i<15; i++){
        if (min>arr[i]){
            min = arr[i];
        }
        if (max<arr[i]){
            max = arr[i];
        }
        sum = sum + arr[i];
    }
    
    cout << min << "\n"<< max << "\n"<< sum/15 << "\n";
    
}
