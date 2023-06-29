#include <iostream>
using namespace std;

int getFactorial(int n){
if(n == 1){
    return n;
}
    int ans = n * getFactorial(n-1);
    return ans;
}

int main(int argc, char const *argv[])
{   

    int n;
    cout<<"enter the no you want to take out the factorial";
    cin>>n;
    cout<<"your factorial no is"<<getFactorial(n)<<endl;
    return 0;
}
