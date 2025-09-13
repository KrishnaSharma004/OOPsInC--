#include <iostream>
#include <fstream>
using namespace std;
int main(){
    fstream file;
    file.open("abc.txt",ios::in);
    if(!file){
        cout << "Errror in opening file for reading " << endl;
        return 0;
    }
    char ch;
    int count = 0;
    while(file.get(ch)) count++;
    file.close();
    cout << "Total number of characters in file are : " << count << endl;
    return 0;
}