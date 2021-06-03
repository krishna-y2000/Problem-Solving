#include<iostream>
#include<algorithm>
using namespace std;


struct edge
{
    int u , v , wt ;
};

edge adj[100001];
int parent[10000];
int rankArr[10000];

bool comp(edge a ,edge b)
{
    if(a.wt < b.wt )
        return true;
    return false;
}
int findPar(int u ) {
    if(u == parent[u]) return u; 
    return parent[u] = findPar(parent[u]); 
};

void unionFunc(int a , int b) 
{
    int u = findPar(a);
    int v = findPar(b);
    if(rankArr[u] < rankArr[v]) {
    	parent[u] = v;
    }
    else if(rankArr[v] < rankArr[u]) {
    	parent[v] = u; 
    }
    else {
    	parent[v] = u;
    	rankArr[u]++; 
    }
};

int main()
{
    int n,m,a,b,wt ;
    cin >> n >> m ;
    for(int i = 0;i < n  ; i++) 
	{
         parent[i] = i; 
         rankArr[i] = 0;
    }
	
    for(int i = 0 ; i < m ; i++)
    {
        cin >> adj[i].u >> adj[i].v >> adj[i].wt ;
    };
    sort(adj , adj + m ,comp );
    int sum = 0 ;
    for( int i = 0 ; i < m ; i++)
    {

        if(findPar(adj[i].u ) != findPar(adj[i].v ) )
        {
            sum += adj[i].wt ;
            unionFunc(adj[i].u , adj[i].v );
        }
    }
    cout << sum ;
    return 0 ;
}