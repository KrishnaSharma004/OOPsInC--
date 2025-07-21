#include <iostream>
#include <string>
using namespace std;

class Kohli{
    int WorldRank;
    int TotalSixes;

    public:
    Kohli(int WorldRank,int TotalSixes){
        this->WorldRank = WorldRank;
        this->TotalSixes = TotalSixes;
    }
    int getWorldRank(){
        return WorldRank;
    }
    int getTotalSixes(){
        return TotalSixes;
    }
};
int main(){
    Kohli v1(1,386);
    cout << "kohli's Rank : " << v1.getWorldRank() << endl;
    cout << "kohli's total sixes : " << v1.getTotalSixes() << endl;
    Kohli v2(2,400);
    cout << "kohli's Rank : " << v2.getWorldRank() << endl;
    cout << "kohli's total sixes : " << v2.getTotalSixes() << endl;
    //Using Assignment Operater :
    v1=v2;
    cout << "After use of Assignment operater : " << endl;
    cout << "kohli's Rank : " << v1.getWorldRank() << endl;
    cout << "kohli's total sixes : " << v1.getTotalSixes() << endl;
    return 0;
}