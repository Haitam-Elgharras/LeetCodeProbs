
#include<iostream>
#include<string>
#include <unordered_map>

using namespace std;
int main () {

string s="DCXXI";//500+100+10+10+1=621

 unordered_map<int, int> map={
      {'I', 1}, {'V', 5}, {'X', 10},
        {'L', 50}, {'C', 100}, {'D', 500},
        {'M', 1000}
 };

 int sum=0;
  for (int i = 0; i < s.length(); i++) {
    int current =map[s[i]];

// To must ensure that the last char is add to the sum
    if(i<s.length()-1 && current<map[s[i+1]])
        sum-=current;
    else 
    sum+=current;
  }

cout<<sum;//621
    return 0;
}
