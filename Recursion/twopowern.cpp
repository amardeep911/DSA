#include <iostream>
#include <math.h>
using namespace std;

int getPower(int n){
if(n == 0){
    return 1;
};
    int ans = 2 *  getPower(n-1);
    return ans;
}

int main(int argc, char const *argv[])
{   

    int n;
    cout<<"Upto how much power of 2";
    cin>>n;
    cout<<"your factorial no is"<<getPower(n)<<endl;
    return 0;
}
