#include <bits/stdc++.h>

using namespace std;

class StackWithMax {
    vector<int> stack;
    vector<int> safe;

  public:
    void Push(int value) {
        if(stack.empty())
        {
            stack.push_back(value);
            safe.push_back(value);
        }
        else
        {
            if(value >= safe.back())
            {
                safe.push_back(value);
            }
            stack.push_back(value);
        }

    }

    void Pop() {
        assert(stack.size());
        if(safe.back() == stack.back())
        {
            safe.pop_back();
        }
        stack.pop_back();
    }

    int Max() const {
        assert(stack.size());
        return safe.back();
    }

};

int main() {
    int num_queries = 0;
    cin >> num_queries;

    string query;
    string value;

    StackWithMax stack;

    for (int i = 0; i < num_queries; ++i) {
        cin >> query;
        if (query == "push") {
            cin >> value;
            stack.Push(stoi(value));
        }
        else if (query == "pop") {
            stack.Pop();
        }
        else if (query == "max") {
            cout << stack.Max() << "\n";
        }
        else {
            assert(0);
        }
    }
    return 0;
}
