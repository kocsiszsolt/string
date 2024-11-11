#include <iostream>
#include <iostream>

using namespace std;

int main()
{
    string s="az almafa iden sok alma termett amibol almalevet keszitettunk", keres="a";
    size_t found=s.find(keres);
    int counter=0;
    while(found!=string::npos)
        {
            counter++;
            found=s
    .find(keres,found+1);
        }
    cout<<counter;
    return 0;
}
