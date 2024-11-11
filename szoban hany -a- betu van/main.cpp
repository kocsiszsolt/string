#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int n=0;
    cin>>s;
    for(char c: s){
        if(c=='a'){
            n++;
        }
    }
    cout<<"a szoban"<<" "<<n<<" "<<"a betu van";
    return 0;
}
