#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,pp=0;
    cin >> n >> k;

    int brr[10001];
    for(int i=0;i<n;i++)
        cin >> brr[i];

    int sm=0,p=0;
    for(int j=0;j<n;j++){

        if((brr[j])>8){
            sm +=8;
            p = p + (brr[j]-8);
        }
        else {

         if((brr[j]+p)>8){
            sm += 8;
            p =( brr[j]+p)-8;
         }
         else {
                sm += brr[j]+p;
              p=0;
         }
        }
        if(sm>=k){
              cout <<j+1<<endl;
               return 0;
            }
    }
    cout <<-1<<endl;

       return 0;
}
