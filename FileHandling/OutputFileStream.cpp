#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream outfile("abc.txt");
    if(outfile.is_open()){
        outfile << "Hello Everyone!" << endl;
        outfile << "Radhe Radhe" << endl;
        outfile.close();
        cout << "Data written successfully" << endl;
    }else{
        cout << "Unable to open file for writting" << endl;
    }
    return 0;
}