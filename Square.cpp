#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int a,b,c,d;
        cin >> a >> b >> c >> d;

        if(a==b && b==c && c==d && d==a){
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }

    }

    return 0;
}
