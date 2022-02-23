/*Goal: practice std::cin for strings
**Write a program that prompts two users for their
**name, address, and phone number. 
**Print the information to the console in the following format:
**name
**\/t\/t address
**\/t\/tphone number
*/
#include <iostream>
#include <string>

using namespace std;

int main(){
    string name1, name2, add1, add2, ph1, ph2;
    getline(cin,name1);
    getline(cin,add1);
    getline(cin,ph1);
    getline(cin,name2);
    getline(cin,add2);
    getline(cin,ph2);
    cout<<name1<<"\t"<<add1<<"\t"<<ph1;
    cout<<name2<<"\t"<<add2<<"\t"<<ph2;
    return 0;
    
}
