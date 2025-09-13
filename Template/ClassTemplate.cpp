#include <iostream>
using namespace std;

template <typename T>
class multiple{
    private:
    T num1;
    T num2;
    public :
    void setvalues(T a,T b);
    T getmul();
};
template <typename T>
void multiple<T>::setvalues(T a,T b){
    num1 = a;
    num2 = b;
}
template<typename T>
T multiple<T>::getmul(){
    return num1*num2;
}

int main(){
    multiple<int> intmul;
    intmul.setvalues(5,14);
    cout << "Mul (int) :" << intmul.getmul() << endl;

    multiple<float> floatmul;
    floatmul.setvalues(5.6,6.7);
    cout << "Mul (float) :" << floatmul.getmul() << endl;

    return 0;
}