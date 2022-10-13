#include<bits/stdc++.h>
using namespace std;

int const N = 1e5 +2;
int a[N]; 
int tree[4*N];  // total no. of nodes = 2n-1, but for safety we use 4n

void build(int node, int st, int en){
    // base case for leaf node 
    if(st==en){
        tree[node]=st;
        return;
    }
    int mid = (st+en)/2;
    build(2*node,st,mid);   // nodes would multiply and range would be half 
    build(2*node+1,mid+1,en);

    tree[node]= tree[2*node] + tree[2*node+1];
    }



int main(){

    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    build(1,0,n-1);

    for(int i=0; i<15; i++){
        cout<<tree[i]<<endl;
    }
    return 0;
}