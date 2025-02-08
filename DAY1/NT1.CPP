#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;


/*DIVISORS OF A NUMBER*/

vector<int> Divisors(int n){
    vector<int> ans;
    for(int i=1;i<sqrt(n);i++){
        if(n%i==0){
            ans.push_back(i);
            if(i!=n/i){
                ans.push_back(n/i);
            }
        }
    }
    return ans;
}



/*2. Sieve of Eratosthenes*/  //prime numbers upto n

vector<int> Sieve(int n){
    vector<int> ans;
    vector<bool> isprim(n+1,true);
    isprim[0]=isprim[1]=false;
    for(int i=2;i*i<=n;i++){
        if(isprim[i]){
            for(int j=i*i;j<=n;j+=i){
                isprim[j]=false;
            }
        }
    }
}





int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    // vector<int>ans=Divisors(n);
    // sort(ans.begin(),ans.end());

    vector<int>ans=Sieve(n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}