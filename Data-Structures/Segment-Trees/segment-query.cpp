#include<bits/stdc++.h>
using namespace std;

int const N = 1e5 +2;
int a[N]; 
int tree[4*N];  // total no. of nodes = 2n-1, but for safety we use 4n

void build(int node, int st, int en){
    // base case for leaf node 
    if(st==en){
        tree[node]=a[st];
        return;
    }
    int mid = (st+en)/2;
    build(2*node,st,mid);   // nodes would multiply and range would be half 
    build(2*node+1,mid+1,en);

    tree[node]= tree[2*node] + tree[2*node+1];
}
int query(int node, int st, int en, int l, int r){
    if(r<st || l>en){
        return 0;
    }
    if(l<=st && en<=r){
        return tree[node];
    }
    int mid= (st+en)/2;
    int q1 = query(2*node, st, mid, l, r);
    int q2= query(2*node+1, mid+1, en, l, r);

    return q1+q2;
}

int main(){ 

    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    build(1,0,n-1);

    while(1){
        int type;
        cin>>type;
        
        if(type==-1){
            break;
        }
        if(type==1){
            int l,r;
            cin>>l>>r;
            int ans= query(1,0,n-1,l,r);
            cout<<ans<<endl;
        }
    }

    return 0;
}
