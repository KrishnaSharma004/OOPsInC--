#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout << "Enter two numbers :";
    cin >> a >> b;

    try{
        if(b!=0){
            cout << a/b << endl;
        }else{
            throw b;
        }
        if(a<b){
            throw  a;
        }
    }
    catch (...){
        cerr << "Error in the logic" << endl;
    }
    return 0;
}