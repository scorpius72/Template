vector < vector<int> > graph;

struct LCA {
    vector<int> height, euler, first, segtree;
    vector<bool> visited;
    int n;
 
    LCA(vector<vector<int>> &adj, int root = 0) {
        n = adj.size();
        height.resize(n);
        first.resize(n);
        euler.reserve(n * 2);
        visited.assign(n, false);
        dfs(adj, root);
        int m = euler.size();
        segtree.resize(m * 4);
        build(1, 0, m - 1);
    }
 
    void dfs(vector<vector<int>> &adj, int node, int h = 0) {
        visited[node] = true;
        height[node] = h;
        first[node] = euler.size();
        euler.push_back(node);
        for (auto to : adj[node]) {
            if (!visited[to]) {
                dfs(adj, to, h + 1);
                euler.push_back(node);
            }
        }
    }
 
    void build(int node, int b, int e) {
        if (b == e) {
            segtree[node] = euler[b];
        } else {
            int mid = (b + e) / 2;
            build(node << 1, b, mid);
            build(node << 1 | 1, mid + 1, e);
            int l = segtree[node << 1], r = segtree[node << 1 | 1];
            segtree[node] = (height[l] < height[r]) ? l : r;
        }
    }
 
    int query(int node, int b, int e, int L, int R) {
        if (b > R || e < L)
            return -1;
        if (b >= L && e <= R)
            return segtree[node];
        int mid = (b + e) >> 1;
 
        int left = query(node << 1, b, mid, L, R);
        int right = query(node << 1 | 1, mid + 1, e, L, R);
        if (left == -1) return right;
        if (right == -1) return left;
        return height[left] < height[right] ? left : right;
    }
 
    int lca(int u, int v) {
        int left = first[u], right = first[v];
        if (left > right)
            swap(left, right);
        return query(1, 0, euler.size() - 1, left, right);
    }
};


void Solve(int _)
{
    int n; cin>> n;
    graph = vector < vector<int> >(n+1);

    for (int i = 1; i<n; i++){
        int a, b; cin >> a >> b; a--; b--;  // carefull here idx start from 0
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    LCA ancestor(graph);

    // int curLca = ancestor.lca(node_1 , node_2)  give the lca
    // int height = ancestor.height(node) give the height of the cur node
    

}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int _ = 1,__ = 0;
    // cin >> _;
    while(++__ <= _)
        Solve(__);
 
    return 0;
}