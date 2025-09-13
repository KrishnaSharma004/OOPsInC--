#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream infile("abc.txt");
    if(infile.is_open()){
        string line;
        //Read the file line by line:
        while(getline(infile,line)){
            cout << line << endl;
        }
        infile.close();
    }else{
        cout << "Unable to open the file for reading" << endl;
    }
    return 0;
}