#include <iostream>
using namespace std;

template <typename T,typename U,typename V=int>
class multiple{
    private:
    T num1;
    U num2;
    V num3;
    public :
    void setvalues(T a,U b,V c);
    V getmul();
};
template <typename T,typename U,typename V>
void multiple<T,U,V>::setvalues(T a,U b,V c){
    num1 = a;
    num2 = b;
    num3 = c;
}
template<typename T,typename U,typename V>
V multiple<T,U,V>::getmul(){
    return num1*num2*num3;
}

int main(){
    multiple<int,float> intmul;
    intmul.setvalues(5,1.4,14);
    cout << "Mul (int,float,int)(int):" << intmul.getmul() << endl;

    multiple<int,float,double> floatmul;
    floatmul.setvalues(6,6.7,1.5);
    cout << "Sum (int,float,double)(double) :" << floatmul.getmul() << endl;

    return 0;
}