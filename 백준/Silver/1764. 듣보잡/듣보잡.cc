#include<iostream>
#include<unordered_map>
#include<set>

using namespace std;

int main() {

    unordered_map<string, int> db = {};
    int num, sum;

    cin >> num >> sum;

    for (int i = 0; i < num + sum; i++) {

        string s;
        cin >> s;

        db[s]++;

    }

    int dbt = 0;
    set<string> sasdf;
    for (auto mm : db) {

        if (mm.second >= 2) {

            sasdf.insert(mm.first);
            dbt++;

        }

    }

    int size = sasdf.size();

    cout << dbt << '\n';

    for (auto asdf : sasdf) {

        cout << asdf << '\n';

    }

}