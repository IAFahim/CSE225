#include <bits/stdc++.h>
#include "heaptype.cpp"

using namespace std;

template<class T>
void FIND(GraphType<T> &graphType,T u, T v){
    cout<<(graphType.FoundEdge(u,v)?"There is an edge.":"There is no edge.")<<endl;
}

int main() {
    GraphType<char> graphType;
    graphType.AddVertex('A');
    graphType.AddVertex('B');
    graphType.AddVertex('C');
    graphType.AddVertex('D');
    graphType.AddVertex('E');
    graphType.AddVertex('F');
    graphType.AddVertex('G');
    graphType.AddVertex('H');

    graphType.AddEdge('A', 'B', 1);
    graphType.AddEdge('B', 'A', 1);
    graphType.AddEdge('A', 'C', 1);
    graphType.AddEdge('A', 'D', 1);
    graphType.AddEdge('D', 'A', 1);
    graphType.AddEdge('D', 'G', 1);
    graphType.AddEdge('G', 'F', 1);
    graphType.AddEdge('F', 'H', 1);
    graphType.AddEdge('H', 'E', 1);
    graphType.AddEdge('D', 'E', 1);

    cout<<graphType.OutDegree('D')<<endl;

    FIND(graphType,'A','D');

    FIND(graphType,'B','D');

    graphType.DepthFirstSearch('B','E');

    graphType.DepthFirstSearch('E','B');

    graphType.BreadthFirstSearch('B','E');

    graphType.BreadthFirstSearch('E','B');

    graphType.BreadthFirstSearch('B','E');

}