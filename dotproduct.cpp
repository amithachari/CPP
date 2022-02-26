/*Goal: practice using multidimensional arrays.
**Write a program that will accept values for a 4x4 array 
**and a vector of size 4. 
**Use the dot product to multiply the array by the vector. 
**Print the resulting vector. 
*/

#include<iostream>
#include<cstddef>
using namespace std;


int main()
{
    //TODO: multiply a 4x4 array with vector of size 4. 
    //Print the resultant product vector
    int mat[4][4] = {};
    int resvec[4] = {0,0,0,0};
    int vec[4] = {};
    for(size_t i = 0; i < 4; i++){
        for(size_t j = 0; j < 4; j++){
            cin>>mat[i][j];
        }
    }
    for(size_t i =0; i<4; i++){
        cin>>vec[i];
    }
    
    for(size_t i = 0; i < 4; i++){
        for(size_t j = 0; j < 4; j++){
            resvec[i] = resvec[i] + mat[i][j]*vec[j]; 
        }
    }
    for(size_t i =0; i<4; i++){
        cout<<resvec[i]<<"\n";
    }
    
    
    return 0;
}
