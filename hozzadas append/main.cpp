#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s,beszur;
    cout<<"szo ";
    cin>>s;
    cout<<"beszurando szo ";
    cin>>beszur;
    s.append(beszur);
    cout<<s;
    return 0;
}
