#include <iostream>
using namespace std;

class Complex{
    private:
    int real;
    int img;

    public:
    Complex(){
        real=0;
        img=0;
    }
    Complex(int real,int img){
        this->img=img;
        this->real=real;
    }
    void print(){
        cout << real << "+" << img << "i" << endl;
    }
    //binary operator(+) over loading done
    Complex operator+(Complex c){
        Complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }
};
int main(){
    Complex c1(5,6);
    Complex c2(4,6);
    Complex c3;
    
    c3=c1+c2;
    c3.print();
}