#include <iostream>
#include<vector>

using namespace std;

int main()
{ int t,n,k,i;

cin>>t;

while(t--){

int rb=0;
int given = 0;
    cin>>n>>k;

    vector<int>gold(n);


    for(i=0 ; i<n ; i++)
            cin>> gold[i];

    /*for(i=1 ; i<=k ; i++)
            cout<<"\t"<<t[i];*/
    for(i=0 ; i<n ; i++){
        if(gold[i]>=k){
            rb += gold[i];
        }
        else if(gold[i]==0 && rb>0){
            rb--;
            given++;
        }
    }
cout<<given<<endl;

}
    return 0;
}
