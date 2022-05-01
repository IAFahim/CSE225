#include <bits/stdc++.h>
#include "List.h"

using namespace std;

int main() {
    List list;
    list.AddAsHead(10);
    list.AddAsHead(20);
    list.PopHead();

    List list_V2;
    list.AddAsHead(10);
    list.AddAsHead(20);

    list.AddAll(list_V2);
    list.Print();
}