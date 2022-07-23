#include <bits/stdc++.h>
using namespace std;

// void findCombinations(string str, vector<string> &substring,
//         set<vector<string>> &combinations)
// {
//     // if all characters of the input string are processed,
//     // add the output string to result
//     if (str.length() == 0)
//     {
//         vector<string> output(substring);
//         combinations.insert(output);
//         return;
//     }
 
//     // append each prefix `str[0, i]` to the output string and recur for
//     // remaining substring `str[i+1, n-1]`
//     for (int i = 0; i < str.length(); i++)
//     {
//         // push prefix `str[0, i]` into the output vector
//         substring.push_back(str.substr(0, i + 1));
 
//         // recur for the remaining string `str[i+1, n-1]`
//         findCombinations(str.substr(i + 1), substring, combinations);
 
//         // backtrack: remove current substring from the output vector
//         substring.pop_back();
//     }
// }

// bool isanagram(string s1, string s2)
// {
//     int l1 = s1.length();
//     int l2 = s2.length();
  
//     unordered_map<char, int> m;
//     if (l1 != l2) {
//         return false;
//     }
//     for (int i = 0; i < l1; i++) {
//         m[s1[i]]++;
//     }
  
//     for (int i = 0; i < l2; i++) {
//         if (m.find(s2[i]) == m.end()) {
//             return false;
//         }
//         else {
//             m[s2[i]]--;
//             if (m[s2[i]] == 0) {
//                 m.erase(s2[i]);
//             }
//         }
//     }
//     return m.size() == 0;
// }

// set<vector<string>> findCombinations(string s)
// {
//     set<vector<string>> combinations;
 
//     // base case
//     if (s.length() == 0) {
//         return combinations;
//     }
 
//     // vector to store non-overlapping substrings
//     vector<string> substring;
 
//     // find all non-overlapping substrings
//     findCombinations(s, substring, combinations);
 
//     return combinations;
// }

// void printVector(vector<string> const &out)
// {
//     for (auto str: out) {
//         cout << str << " ";
//     }
//     cout << endl;
// }
 

// int main() {
//     int n;
//     cin>>n;
//     string str;
//     cin>>str;
//     set<vector<string>> combinations = findCombinations(str);
//     for (vector<string> combination: combinations) {
//         printVector(combination);
//     }
//     return 0;
// }



void recur(string s, int i, string result)
{
    int n = s.length();
    if (i == n) {
        cout << result << endl;
    }
 
    // consider each substring S[i, j]
    for (int j = n - 1; j >= i; j--)
    {
        // substr(pos, n) returns a substring of length `n` that starts at
        // position pos of the current string
        string substr = "{" + s.substr(i, j - i + 1) + "}";
 
        // append the substring to the result and recur with an index of the
        // next character to be processed and the result string
        recur(s, j + 1, result + substr);
    }
}
 
int main()
{
    // input string
    string s = "ABCD";
 
    int starting_index = 0;
    string empty_string = "";
 
    recur(s, starting_index, empty_string);
 
    return 0;
}
