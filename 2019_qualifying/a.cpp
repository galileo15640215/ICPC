#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    int n,m;
      while(cin>>n>>m){
          if(n==0&&m==0) break;
        vector<int> sum(n,0);
        for(int i=0; i<n*m; i++){
                int tmp;
                cin>>tmp;
                sum[i%n]+=tmp;
        }
        cout<<*max_element(sum.begin(),sum.end())<<endl;
    }
    return 0;
}