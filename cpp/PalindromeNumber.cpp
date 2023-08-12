
#include<iostream>
#include<string>
#include <unordered_map>

// Runtime0 ms Beats 100%

using namespace std;
int main () {

    int x=1234567899;
    long antiX=0;
    while (x>0)
    {
        int reminder=x%10;
        antiX= antiX*10+reminder;
        cout<<antiX<<endl;
        if(antiX==0)
        {
           cout<<"false";
        return 0;
        }
        x/=10;
    }
    cout<<antiX;
}
