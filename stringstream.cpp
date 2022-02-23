/*Goal: practice using stringstream
/*Goal: practice getting string inputs and 
 **converting them to numeric variables using
 **stringstream.
 **
 **Prompt the user for the length of a room. 
 **Then prompt for the width of the room.
 **Print out the area of the room. 
 */

 #include <iostream>
 #include <sstream>
 #include <string>
 
 using namespace std;
 
 int main(){
     string slen, swidth;
     float len, width;
     getline(cin,slen);
     getline(cin,swidth);
     stringstream(slen) >> len;
     stringstream(swidth) >> width;
     cout << len*width;
     
 }
