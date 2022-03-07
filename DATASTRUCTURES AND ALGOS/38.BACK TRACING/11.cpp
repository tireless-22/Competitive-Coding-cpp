#include <bits/stdc++.h>
using namespace std;
 
// Returns total number of palindrome substring of
// length greater then equal to 2
int CountPS(char str[], int n)
{
    // create empty 2-D matrix that counts all palindrome
    // substring. dp[i][j] stores counts of palindromic
    // substrings in st[i..j]
    int dp[n][n];
    memset(dp, 0, sizeof(dp));
 
    // P[i][j] = true if substring str[i..j] is palindrome,
    // else false
    bool P[n][n];
    memset(P, false, sizeof(P));
 
    // palindrome of single length
    for (int i = 0; i < n; i++)
        P[i][i] = true;
 
    // palindrome of length 2
    for (int i = 0; i < n - 1; i++) {
        if (str[i] == str[i + 1]) {
            P[i][i + 1] = true;
            dp[i][i + 1] = 1;
        }
    }

    for (int gap = 2; gap < n; gap++) {
        // Pick starting point for current gap
        for (int i = 0; i < n - gap; i++) {
            // Set ending point
            int j = gap + i;
 
            // If current string is palindrome
            if (str[i] == str[j] && P[i + 1][j - 1])
                P[i][j] = true;

            if (P[i][j] == true)
                dp[i][j] = dp[i][j - 1] + dp[i + 1][j] + 1
                           - dp[i + 1][j - 1];
            else
                dp[i][j] = dp[i][j - 1] + dp[i + 1][j]
                           - dp[i + 1][j - 1];
        }
    }

    return dp[0][n - 1];
}
 
// Driver code
int main()
{
    char str[] = "a=taba";
    int n = strlen(str);
    cout << CountPS(str, n) << endl;
    return 0;
}