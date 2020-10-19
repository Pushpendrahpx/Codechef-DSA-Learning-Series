#include <iostream>
using namespace std;
int main()
{   int x = 0;
    while(1){
        cin>>x;
        if(x == 42){
            break;
        }else{
            cout<<x<<'\n';
        }
    }
}