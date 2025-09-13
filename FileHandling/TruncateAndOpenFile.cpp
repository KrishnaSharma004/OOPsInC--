#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream file;

    file.open("abc.txt",ios::out | ios::trunc);
    if(!file){
        cout << "Error in opening file" << endl;
        return 0;
    }
    file << "RadhaKrishna" << endl;
    cout << "Seccessfully written in the file " << endl;
    return 0;
}