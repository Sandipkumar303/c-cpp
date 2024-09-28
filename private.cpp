#include<iostream>
using namespace std;
class myclass{
    public:
    int x=10;
    private:
    int y;
};
int main(){
    myclass myobj;
    myobj.x=25;
    cout<<myobj.x;
    return 0;
}