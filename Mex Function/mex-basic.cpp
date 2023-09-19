
#include <bits/stdc++.h>
using namespace std;

int Mex (unordered_set <int> s){
    int m = 0;
    while(s.find(m)!=s.end()) m++;
    return m; 
}

int main(){
    unordered_set <int> a
    int 
    for(int i = 1; i < 5; i++) a.insert(i);
    cout<<Mex(a)<<endl;
    return 0;
}
