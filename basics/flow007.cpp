#include <iostream>
#include <string.h>
using namespace std;
int main()
{   
    int t;
    cin>>t;
    while(t--){
        char str[1000000];
        cin>>str;
        long long len =strlen(str);
        bool flag = true;
        for(long long i = len-1; i >=0 ; i--){
            if(str[i]!='0'){
                flag = false;
                cout<<str[i];
            }else{
                if(flag == false){
                    cout<<'0';
                }
            }
        }
        cout<<"\n";
    }
}