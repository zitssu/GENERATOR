#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<string> make_permutations(int length) {
  if (length == 0) {
    return vector<string>{};
  }
  vector<string> results;
  vector<string> children = make_permutations(length - 1);
  for (char letter = 'a'; letter <= 'z'; letter++) { 
    results.emplace_back(1, letter);
    for(auto child : children) {
      results.push_back(std::string(1, letter) + child);
    }
  }
  return results;
}

int main()
{
 auto results = make_permutations(2);
    for(auto s : results) cout << s << endl;
}
