#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
int main(){
    int n,m;
    vector<int>f;
    
    while(cin >> n >> m){
        if(n==0 && m==0) break;
        map<int,int> choice;
        vector<int> a(n);
        vector<int> w(m);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        for(int i=0; i<m; i++){
            cin >> w[i];
            choice[w[i]]=1;
        }
        
        for(int i=0; i<m-1; i++){
            for(int j=i+1; j<m; j++){
                choice[w[i]+w[j]]=1;
                choice[abs(w[i]-w[j])]=1;
            }
        }
        int flag=0;
        int mint=99999999;
    
        int on=0,to=0;
        for(int i=1; i<=n; i++){
            if(choice[i]==1){
                flag=1;
                
            } else{
                on= i;
                to= on;
            }
        }
        f.emplace_back(flag);
    }
    for(int x:f){
        cout << x << endl;
    }
}