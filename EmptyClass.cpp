//In case of an empty class the size alloted to the object of that class is of 1 byte
//To keep the track of the object it is done so 
#include <iostream>
using namespace std;

class Kohli{
    //Properties
};
int main(){
    //Object Creation
    Kohli goat;

    cout << "Size :" << sizeof(goat) << endl;
    return 0;
}