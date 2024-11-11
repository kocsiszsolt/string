#include <iostream>
#include <iostream>

using namespace std;

int main()
{
    string s1,s2;
    cin>>s1;
    getline(cin,s2);
    cin>>s2;
    size_t found=s2.find(" ");
    s1.append(s2,0,found);
    cout<<s1;
    return 0;
}
