#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int energy;
    cin>>energy;
    int monster[n];
    int bonus[n];
    for(int i=0;i<n;i++)
    {
        cin>>monster[i];
    }
    sort(monster,monster+n) ;
    for(int i=0;i<n;i++)
    {
        cin>>bonus[i];
    }
    int c=0;
    for(int i=0;i<n;i++){
        if(energy >= monster[i]){
            energy+=bonus[i];
            c++;
        }
        else break;
    }
    cout<<c;
}