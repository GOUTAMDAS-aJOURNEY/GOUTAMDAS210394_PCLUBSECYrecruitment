#include<bits/stdc++.h>
using namespace std;
const int n=100000;
vector<int>v(n,0);

int main()
{
    for(int i=1;i<n;i++)
    {
        for(int j=i;j<=n;j+=i)
        {
           v[j]++;
        }
    }
    int t;
    cin >> t;
    while(t--){
        int n1,n2,n3,n4;
     cin >> n1 >> n2 >> n3 >> n4;
     if(n1>n2){
        int rr=n1;
        n1=n2;
        n2=rr;
     }
     if(n3>n4){
        int qq=n3;
        n3=n4;
        n4=qq;
     }
     int res1=0,res2=0;
         for(int y=n1;y<=n2;y++){
            int k;
            if(v[y]%2!=0){
                k=v[y]-1;
            }
            else{
                k=  v[y];
            }
            k=k/2;
            if(k>=2){
                res1=res1+(k*(k-1)*2);
            }
         }
         for(int y1=n3;y1<=n4;y1++){
              int kk;
            if(v[y1]%2!=0){
                kk=v[y1]-1;
            }
            else{
                kk=  v[y1];
            }
            kk=kk/2;
            if(kk>=2){
                res2=res2+(kk*(kk-1)*2);
            }
         }
         //cout << res1 << ' ' << res2 << ' ';
         if(res1>res2){
        cout << "SERENA" << '\n';
     }
     else if(res2>res1){
        cout << "MISTY" << '\n';
     }
     else{
        cout << "DRAW" << '\n';
     }
    }
}