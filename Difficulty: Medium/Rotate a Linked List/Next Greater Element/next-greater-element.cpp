//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find the next greater element for each element of the array.
    vector<int> nextLargerElement(vector<int>& arr) {
        
       /* int n=arr.size();
        vector<int>ans;
        ans.push_back(-1);
        int maxi=INT_MIN;
        for (int i=n-1;i>0;i--){
            if (arr[i]>arr[i-1]){
                ans.push_back(arr[i]);
                maxi=max(maxi,arr[i]);
            }
            else{
                if (maxi<=arr[i-1] ){
                    ans.push_back(-1);
                }
                else{
                ans.push_back(maxi);
            }
        }
        }
        reverse(ans.begin(),ans.end());
        return ans;*/
        
        Im
        int n = arr.size();
    vector<int> ans(n, -1);  // Initialize with -1
    stack<int> s;
    
    for (int i = n - 1; i >= 0; --i) {
        while (!s.empty() && s.top() <= arr[i]) {
            s.pop();
        }
        if (!s.empty()) {
            ans[i] = s.top();
        }
        s.push(arr[i]);
    }
    
    return ans;

    }
};

//{ Driver Code Starts.

int main() {
    int t; // Number of test cases
    cin >> t;
    cin.ignore(); // Ignore the newline after reading t
    while (t--) {
        vector<int> a;
        string input;

        // Reading the entire input line for the array
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num); // Read the array elements from input string

        Solution obj;
        vector<int> result = obj.nextLargerElement(a);

        // Print the result in the required format
        for (int i = 0; i < result.size(); i++) {
            if (i != 0)
                cout << " ";
            cout << result[i];
        }
        cout << endl;        // Ensure new line after each test case output
        cout << "~" << endl; // Ensure new line after each test case output
    }

    return 0;
}

// } Driver Code Ends