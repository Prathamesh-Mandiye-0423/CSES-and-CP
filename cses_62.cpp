#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=1e5;
int n,m;
vector<int>adj[N+1],team(N+1);
bool vis[N+1];
bool dfs(ll node, ll ct)
{
    vis[node] = 1;
    team[node] = ct;
    for (auto &i : adj[node])
    {
        if (team[i] == 0)
        {
            bool temp = dfs(i, 3 - ct);
            if (temp == false)
                return false;
        }
        else if (team[i] == ct)
        {
            return false;
        }
    }
    return true;
}
int main(){
	cin>>n>>m;
	while (m--)
        {
            ll x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        bool ans = true;
        for (ll i = 1; i <= n; i++)
        {
            if (vis[i])
                continue;
            ll res = dfs(i, 1);
            if (!res)
            {
                ans = false;
                break;
            }
        }
        if (ans)
        {
            for (ll i = 1; i <= n; i++)
                cout << team[i] << " ";
        }
        else
            cout << "IMPOSSIBLE\n";
    }
