#include <bits/stdc++.h>
using namespace std;

int colour[10001];
vector<int> adj[100001];

bool biPartite(int colour[] , vector<int> adj[] , int src  )
{
    queue<int> q;
    q.push(src);
    colour[src] = 1 ;
    while( !q.empty())
    {
        int node = q.front();
        q.pop();
        for(auto i : adj[node])
        {
            if(colour[i] == -1 )
            {
                colour[i] = 1 - colour[node];
                q.push(i);
            }
            else if(colour[i] == colour[node] )
                return false;
        }
    }
    return true;
    
}

int main()
{
    int n , m;
    cin >> n >> m ;
    for(int i = 0 ; i < m ; i++)
    {
        int u,v ;
        cin >> u >> v ;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }
    memset(colour, -1, sizeof colour); 
    for(int i = 0 ; i < n ; i++ )
    {
        if(colour[i] == -1 )
        {
            if(biPartite(colour,adj,i) == false)
                cout << "false \n";
            else 
                cout << "true \n";
        }
    }

}