// Given a string A denoting a stream of lowercase alphabets, you have to make a new string B.
//
// B is formed such that we have to find the first non-repeating character each time a character is inserted to the stream and append it at the end to B. If no non-repeating character is found then append '#' at the end of B.
//
// Your Task:
//
// You don't need to read input or print anything. Your task is to complete the function firstNonRepeating() which takes a string A as input and returns a string B after processing the stream of lowercase alphabets.
//
// Expected Time Complexity: O(n)
// Expected Auxiliary Space: O(26) = O(1)
//
// Example 1:
// Input: A = "abcabc"
// Output: aaabc#
// Example 2:
// Input: A = "abadbc"
// Output: aabbdd

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

string firstNonRepeating(string A) {
    queue<char>q;
    string ans;
    vector<int>freq(26,0);

    for(int i = 0 ; i < A.size() ; i++){
    
        freq[A[i]-'a']++;
    
        if(freq[A[i]-'a'] == 1)
            q.push(A[i]);

        while(!q.empty() && freq[q.front()-'a'] > 1)
            q.pop();

        if(q.empty())
            ans.push_back('#');
        else
            ans.push_back(q.front());
    }

    return ans;
}
