#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long A,B,C,D;
    cin >> A >> B >> C >> D;
    int result = (((A%100)*(B%100)*(C%100)*(D%100))%100);
    cout << setw(2) << setfill('0') << result << endl;

   return 0;
}
