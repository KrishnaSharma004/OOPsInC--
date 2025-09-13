#include <iostream>
#include <fstream>
using namespace std;
int main(){
    fstream appfile;
    appfile.open("abc.txt",ios::app);
    if(appfile.is_open()){
        appfile << "Jay mahakal" << endl;
        appfile << "Ram Ram" << endl;
        cout << "Data written successfully" << endl;
    }else{
        cout << "Unable to open file for appending" << endl;
        return 1;
    }
    appfile.open("abc.txt",ios::in);
    if(!appfile){
        cout << "Error in opening file" << endl;
        return 1;
    }
    cout << "Reading from file.." << endl;
    string line;
    while(getline(appfile,line))
        cout << line << endl;

    appfile.close();
    return 0;
}