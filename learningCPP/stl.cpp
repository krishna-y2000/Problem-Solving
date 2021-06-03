#include<iostream>
#include <vector>
#include <stack>
#include <set>
#include<map> 
using namespace std;


void vectorFunc()
{
    vector<int> v ;
    vector<int> v2 ;
    for(int i = 1; i < 5 ; i++)
        v.push_back(i);
    for(auto it = v.begin() ; it != v.end() ; it++)
    {
        cout << *(it) << " " ;
    };
    cout << " \n" <<  v.size() << " " << v.capacity() << " " << v.max_size() << "\n";
    v.pop_back();
    // cout << v.begin();
    cout << v.size() << "\n";
    cout << *(v.rbegin()) << "\n";
    v.insert(v.begin() + 1,10);
    cout << v[1] << "\n" ;
    v.swap(v2);
     for(auto it = v.begin() ; it != v.end() ; it++)
    {
        cout << *(it) << " " ;
    };
    cout << "Size: " << v.size() ;
};

void stackFunc()
{
    stack<int> st ;
    st.push(10);
    st.push(20);
    cout << st.top() << "\n";
    st.pop();
    //cout << st.empty();
    st.push(50);
    while(!st.empty() )
    {
        cout << st.top() << " ";
        st.pop();
    }
}

void setFunc()
{
    set<int > s ;
    s.insert(10);
    s.insert(20);
    auto val = s.find(10);
    for(auto pos = val ; pos != s.end() ; pos++)
    {
        cout << *pos << " " ;

    }
    s.erase(20);
    cout << "\n" << *(s.begin() );
}

void mapFunc()
{
    map<int,int> mp ;
    mp.insert({1,2});
    mp.insert({2,3});
   for(auto it : mp)
   {
       cout << (it).first << it.second << " " ;
   }
   mp.insert({5,7});
   mp.erase(5);
    for(auto it : mp)
   {
       cout << (it).first << it.second << " " ;
   }
   cout << "\n" << mp[1];
   auto it = mp.find(2); // return position
   mp.erase(it);
   cout << "\n";
   for(auto it : mp)
   {
       cout << (it).first << it.second << " " ;
   }
}

int main()
{
    //vectorFunc();
    //stackFunc();
    //setFunc();
    mapFunc();

}