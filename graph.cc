# include <bits/stdc++.h>
using namespace std;

struct Pair {
    int wt;
    int id;
    Pair() {}
    Pair(int i, int w) {
        id = i;
        wt = w;
    }
};

typedef vector<vector<Pair> > vvp;
typedef vector<Pair> vp;

class WeightedGraph {
public:
    vvp v;
    int nv;
    WeightedGraph(int n) {
        nv = n;
        v.resize(n);
    }

    int addEdge(int src, int dest, int wt, bool bidirectional = true) {
        v[src].push_back(Pair(dest, wt));
        if (bidirectional) {
            v[dest].push_back(Pair(src, wt));
        }
    }
};

int main()
{   int n;
// n is number of nodes
    cin >> n;
    WeightedGraph g(n);
    while(true)
    {   cout << "do you want to enter Node, press 'y' if you want to continue and any other key to escape"<< endl;
        char c;
        cin >> c;
        if(c=='y')
        {   int src,dest,time;
            cout << "Enter source" << endl;
            cin >> src;
            cout << "Enter destination" << endl;
            cin >> dest;
            cout << "Enter time" << endl;
            cin >> time;
            g.addEdge(src, dest, time);
        }
        else
        {
            break;
        }
    }
    
}