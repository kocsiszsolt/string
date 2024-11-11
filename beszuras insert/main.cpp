#include <iostream>
#include <iostream>

using namespace std;

int main()
{
    string s,beszur;
    int pos;
    cout<<"szo ";
    cin>>s;
    cout<<"beszurando szo ";
    cin>>beszur;
    cout<<"pos:";
    cin>>pos;
    s.insert (pos,beszur);
    cout<<s;
    return 0;
}
