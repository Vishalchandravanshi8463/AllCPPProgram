#include<iostream>
using namespace std;
struct ac
{                                 //structure
    int id;
    char letter;
    float $;
};

int main()
{
    struct ac h;
    h.id=4;
    h.letter='r';
    h.$=40.5;
    cout<<h.id<<endl;
    cout<<h.letter<<endl;
    cout<<h.$<<endl;
    return 0;
}