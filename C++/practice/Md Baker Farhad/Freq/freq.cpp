#include <bits/stdc++.h>

using namespace std;

void readFrequency(array<int, 128> arr) {
    for (int i = 0; i < arr.size()-1; ++i) {
        if (arr[i] > 0) {
            cout << char(i) << ": " << arr[i] << ", ";
        }
    }
    int last=arr.size()-1;
    if(last>0){
        cout << char(arr[last]) << ": " << arr[last]<<endl;
    }
}

int main() {
    ifstream doc;
    doc.open(R"(C:\Users\Fahim\GolandProjects\CSE225\C++\clion\text.txt)");
    if (doc.is_open()) {
        string line;
        int lineAt = 0, size = 128;
        vector<array<int, 128>> freqLine;
        while (getline(doc, line)) {
            lineAt++;
            array<int, 128> arr{};
            for (char i: line) {
                arr[i]++;
            }
            freqLine.push_back(arr);
        }
        int gotoline = 1;
        if (!freqLine.empty()) {
            while (gotoline > 0) {
                cin >> gotoline;
                readFrequency(freqLine.at(gotoline - 1));
            }
        }
    } else {
        cout << "give full path or dont have permission";
    }

}