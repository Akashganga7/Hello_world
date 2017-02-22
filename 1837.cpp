#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,q,r;

    while(cin>>a>>b){
        q = a/b;
        r = abs(a%b);

        if(a<0 && b>0 && r!=0){
            q--;
            r = b-r;
        }
        else if(a<0 && b<0 && r!=0){
            q++;
            r = (-b)-r;
        }


        cout<<q<<" "<<r<<endl;
    }

    return 0;
}
