#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int i=0;
    cout<<"s:";
    cin>>s;
    for(char c:s)
    {
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        {
            size_t found=s.find(c);
            while(found!=string::npos)
            {
                s.replace(found,1,"mpm");
                found=s.find(c,found+3);
            }
        }
    }
    cout<<s;
    return 0;
}
