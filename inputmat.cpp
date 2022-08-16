#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;
  
int main()
{
    int t;
    srand(time(0));
    t=rand()%100;
    cout << t << '\n';
    while(t--){
    ;
  int n1,n2,n3,n4;
  n1=rand()%1000000;
  n2=rand()%1000000;
  n3=rand()%1000000;
  n4=rand()%1000000;
  cout << n1 << ' ' << n2 << ' ' << n3 << ' ' << n4 << '\n';
    }
    return 0;
}