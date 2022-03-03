/*header file*/

#include <iostream>
#include <string>

using namespace std;

template <class T>
class Multiplier{
    T m1, m2, product;
    
    public:
        void setM1(T m1l);
        void setM2(T m2l);
        void setProduct();
        void printEquation();
        T getProduct();
        T getM1();
        T getM2();
        
};

template <class T>
void Multiplier<T>::printEquation(){
    cout<<m1<<" * "<<m2<<" = "<<product;
}


template <class T>
void Multiplier<T>::setM1(T m1l){
            m1 = m1l;
        }
        

template <class T>
void Multiplier<T>::setM2(T m2l){
            m2 = m2l;
        }
        

template <class T>
void Multiplier<T>::setProduct(){
            product = m1*m2;
        }
        

template <class T>
T Multiplier<T>::getProduct(){
            return product;
        }



template <class T>
T Multiplier<T>::getM1(){
            return m1;
        }


template <class T>
T Multiplier<T>::getM2(){
            return m2;
        }




int main()
{
    Multiplier<int> multi1;
    Multiplier<float> multi3;
    
    int input1,input2;
    cin>>input1;
    cin>>input2;
    
    multi1.setM1(input1);
    multi1.setM2(input2);
    multi1.setProduct();
    multi1.printEquation();
    
    cout<<"\n";
    float input3, input4;
    cin>>input3;
    cin>>input4;    
    multi3.setM1(input3);
    multi3.setM2(input4);
    multi3.setProduct();
    multi3.printEquation();
    return 0;
}
