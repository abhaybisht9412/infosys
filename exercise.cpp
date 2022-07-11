#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie();
      cout.tie();
    
      
lli q; cin>>q;
while(q--){
int e;
cin>>e;
int n;
cin>>n;
vector<int> v(n);


for(int i=0;i<n;i++){
    cin>>v[i];
}
int c=0;
sort(v.begin(),v.end(),greater<int>());
for(int i=0;i<n;i++){
    if(e==0) break;
    if(v[i] > e){
        continue;
    }
    else if(v[i] <= e){
        int k=2;
        while(k--){
            if(v[i] <= e){
                c+=1;
                e-=v[i];                
            }
            else break;
        }
    }
}
if(e!=0) cout<<"-1"<<endl;
else
cout<<c<<endl;
}
return 0;
}