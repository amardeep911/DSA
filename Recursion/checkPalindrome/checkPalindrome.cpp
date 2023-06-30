#include <iostream>
#include <math.h>
using namespace std;

bool isPalindrome(int i, int j,  std::string s){
    if(i>j){
        return true;
    }
    if(s[i] != s[j]){
        return false;
    }
    else{
     return isPalindrome(i+1, j-1, s);
    }
};


int main(){
    string str = "abbar";
    int i =0;
   bool ans =  isPalindrome(i, str.length()-1 ,str);

   if(ans){
    cout<<"yes it is"<<endl;
   }
   else{
    cout<<"no "<<endl;
   }
    return 0;
}   