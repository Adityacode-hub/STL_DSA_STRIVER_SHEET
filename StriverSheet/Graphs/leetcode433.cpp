#include <iostream>
#include <vector>
#include <queue>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int minMutation(string startGene, string endGene, vector<string>& bank) {

        unordered_set<string> bankSet(bank.begin(), bank.end());

        if (bankSet.find(endGene) == bankSet.end())
            return -1;

        queue<pair<string, int>> q;
        unordered_set<string> visited;

        q.push({startGene, 0});
        visited.insert(startGene);

        char genes[4] = {'A', 'C', 'G', 'T'};

        while (!q.empty()) {

            string current = q.front().first;
            int steps = q.front().second;
            q.pop();

            if (current == endGene)
                return steps;

            for (int i = 0; i < current.length(); i++) {

                char original = current[i];

                for (char ch : genes) {

                    if (ch == original)
                        continue;

                    current[i] = ch;

                    if (bankSet.find(current) != bankSet.end() &&
                        visited.find(current) == visited.end()) {

                        q.push({current, steps + 1});
                        visited.insert(current);
                    }
                }

                current[i] = original; // restore
            }
        }

        return -1;
    }
};

int main() {

    Solution obj;

    string startGene = "AACCGGTT";
    string endGene = "AAACGGTA";

    vector<string> bank = {
        "AACCGGTA",
        "AACCGCTA",
        "AAACGGTA"
    };

    int ans = obj.minMutation(startGene, endGene, bank);

    cout << "Minimum Mutations = " << ans << endl;

    return 0;
}