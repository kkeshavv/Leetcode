class Solution {
public:
    string reverseWords(string s) {
    stringstream ss(s);  // Create a stringstream from the string
    vector<string> words;  // Vector to store words
    
    string word;
    
    // Extract words from the stringstream and store them in the vector
    while (ss >> word) {
        words.push_back(word);
    }
    int n=words.size();
    int low=0,high=n-1;
    while(low<=high){
        swap(words[low],words[high]);
        low++;
        high--;
    }
    string result="";
    for(int i=0;i<n;i++){
        result += words[i];
        if (i != n - 1) {
            result += " ";  // Add space between words
        }
    }
    return result;

    }
};