#include <bits/stdc++.h>
using namespace std;

// -------------------- TYPEDEFS -------------------- //
using ll = long long;
#define all(x) (x).begin(), (x).end()
#define endl '\n'

// -------------------- FAST IO -------------------- //
void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

// -------------------- DEBUG -------------------- //
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << endl;
#else
#define debug(x)
#endif

// -------------------- NUMBER THEORY -------------------- //
ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}

ll power(ll a, ll b) {
    ll res = 1;
    while (b) {
        if (b & 1) res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}

// -------------------- DSU -------------------- //
struct DSU {
    vector<int> parent, sz;

    DSU(int n) {
        parent.resize(n);
        sz.resize(n, 1);
        iota(all(parent), 0);
    }

    int find(int v) {
        if (v == parent[v]) return v;
        return parent[v] = find(parent[v]);
    }

    void unite(int a, int b) {
        a = find(a);
        b = find(b);
        if (a != b) {
            if (sz[a] < sz[b]) swap(a, b);
            parent[b] = a;
            sz[a] += sz[b];
        }
    }
};

// -------------------- SEGMENT TREE -------------------- //
struct SegTree {
    int n;
    vector<ll> tree;

    SegTree(int size) {
        n = size;
        tree.resize(4 * n);
    }

    void build(vector<ll>& arr, int node, int l, int r) {
        if (l == r) {
            tree[node] = arr[l];
            return;
        }
        int mid = (l + r) / 2;
        build(arr, 2*node, l, mid);
        build(arr, 2*node+1, mid+1, r);
        tree[node] = tree[2*node] + tree[2*node+1];
    }

    ll query(int node, int l, int r, int ql, int qr) {
        if (qr < l || r < ql) return 0;
        if (ql <= l && r <= qr) return tree[node];
        int mid = (l + r) / 2;
        return query(2*node, l, mid, ql, qr) +
               query(2*node+1, mid+1, r, ql, qr);
    }

    void update(int node, int l, int r, int idx, ll val) {
        if (l == r) {
            tree[node] = val;
            return;
        }
        int mid = (l + r) / 2;
        if (idx <= mid) update(2*node, l, mid, idx, val);
        else update(2*node+1, mid+1, r, idx, val);

        tree[node] = tree[2*node] + tree[2*node+1];
    }
};

// -------------------- GRAPH -------------------- //
vector<vector<int>> graph;

void dfs(int node, vector<bool>& vis) {
    vis[node] = true;
    for (auto child : graph[node]) {
        if (!vis[child]) dfs(child, vis);
    }
}

void bfs(int start) {
    queue<int> q;
    vector<bool> vis(graph.size(), false);

    q.push(start);
    vis[start] = true;

    while (!q.empty()) {
        int node = q.front(); q.pop();
        for (auto child : graph[node]) {
            if (!vis[child]) {
                vis[child] = true;
                q.push(child);
            }
        }
    }
}

// -------------------- SOLVE -------------------- //
void solve() {
    int n;
    cin >> n;

    vector<ll> a(n);
    for (auto &x : a) cin >> x;

    sort(all(a));

    for (auto x : a) cout << x << " ";
    cout << endl;
}

// -------------------- MAIN -------------------- //
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    fastIO();

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}