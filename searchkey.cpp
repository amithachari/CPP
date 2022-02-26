/*Goal: create a function that searches an array for 
**a given value. 
*/

#include<iostream>
#include<cstddef>
int search(int *array,int size, int searchKey);

int main()
{
    const int size = 4;
    int array[] = {345,75896,2,543};
    int searchKey = 543;
    std::cout<<"Found at: "<<search(array, size, searchKey);
    return 0;
}

int search(int *array, int size, int searchKey){
    int idx = -1;
    for(size_t i = 0; i<size; i++){
        if (array[i] == searchKey){
            idx = i;
        }
    }
    return idx;
}
