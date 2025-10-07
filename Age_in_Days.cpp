#include <bits/stdc++.h>
using namespace std;

int main(){

   int N;
   cin >> N;
   int Year = N / 365;
   cout << Year << " years" << endl;
   int remaining_day = N % 365;
   int Month = remaining_day / 30;
   cout << Month << " months" << endl;
   int Day = remaining_day % 30;
   cout << Day << " days" << endl;

 return 0;
}
