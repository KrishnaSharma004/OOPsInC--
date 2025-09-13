#include <iostream>
using namespace std;

template<typename t> t add(t a,t b){
    return a+b;
}
int main(){
    int res ;
    res = add<int>(5,14);
    float res2;
    res2 = add<float>(5.4,6.5);
    cout << res << endl;
    cout << res2 << endl;
    return 0;
}