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
            throw "Division by zero !!!" ;
        }
    }
    catch (const char*msg){
        cerr << msg << endl;
    }
    return 0;
}