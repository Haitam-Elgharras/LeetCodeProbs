
#include<iostream>
#include<string>
#include <unordered_map>

using namespace std;
int main () {

string s="DCXXI";//500+100+10+10+1=621
int mynum[s.length()];

for(int i=0;i<s.length();i++){
    switch (s[i])
    {
    case 'I' :
        mynum[i]=1;
        break;
    case 'V' :
        mynum[i]=5;
        break;
    case 'X' :
        mynum[i]=10;
        break;
    case 'L' :
        mynum[i]=50;
        break;
    case 'C' :
        mynum[i]=100;
        break;
    case 'D' :
        mynum[i]=500;
        break;
    
    default:
    mynum[i]=1000;
        break;
    }
}
 unordered_map<int, int> map;
 int sum=0;
  for (int i = 0; i < s.length()-1; i++) {
    if(mynum[i]>mynum[i+1])
    {sum+=mynum[i];
    }
   else if(mynum[i]<mynum[i+1])
    {sum+=mynum[i+1]-mynum[i];
    i++;
   }
    else
    sum+=mynum[i];

    if(i==s.length()-2)
    {sum+=mynum[i+1];
    }
  }

cout<<sum;//621
    return 0;
}
