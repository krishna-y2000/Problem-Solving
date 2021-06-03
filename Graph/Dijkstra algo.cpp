#include<iostream>
#include<vector>
#include <queue>
using namespace std ;

vector<pair<int,int>> v[100001];
int main()
{
    int n , m ,source ; 
    cin >> n >> m ;
    for(int i = 0 ; i < m ; i++)
    {
        int a , wt , b ;
        cin >> a >> b  >> wt ;
        v[a].push_back({b,wt});
        v[b].push_back({a,wt});
    };
    cin >> source;
    vector<int> dist(n+1 , 1e9);
    priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > pq;
    dist[source] = 0 ;
    pq.push({0,source});
    while(!pq.empty() )
    {
        int distNode = pq.top().first ;
        int node = pq.top().second ;
        pq.pop();
        vector<pair<int,int> >::iterator it ;
        for(it = v[node].begin() ; it != v[node].end() ; it++ )
        {
            if(dist[it->first] > it->second + dist[node] )
            {
                dist[it->first] = it->second + dist[node]  ;
                pq.push({dist[it->first], it-> first} );
            }
        }
    }
    cout << "The distances from source, " << source << ", are : \n";
	for(int i = 1 ; i<=n ; i++)	cout << dist[i] << " ";
	cout << "\n";


}