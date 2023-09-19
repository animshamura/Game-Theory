
#include <bits/stdc++.h>
using namespace std;

int Mex (unordered_set <int> s){

    int m = 0;
    
    while(s.find(m)!=s.end()) m++;

    return m; 

}

int Grundy(int t){
    
    if(t==0) return 0;
    
    unordered_set <int> a;
    
    for(int i = 0; i < t-1; i++) a.insert(Grundy(i));
    
    return Mex(a);
}
int main(){
    cout<<Grundy(10)<<endl;
    return 0;
}
