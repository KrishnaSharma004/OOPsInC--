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
            throw "a is less than b !!" ;
        }
    }
    catch (const char*msg){
        cerr << msg << endl;
    }
    catch (int b){
        cerr << "Division by zero !!" << endl;
    }
    return 0;
}