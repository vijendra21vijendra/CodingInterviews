class Solution {
public:
    string s;
    string temp;
    Solution(){
        s = "a0";
        temp = "http://tinyurl.com/";
    }
    unordered_map<string,string> hash;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        hash[temp+s] = longUrl;
        string enc = temp+s;
        int t= s.length();
        if(s[t-1]=='9'){
            s[t-1] = 'a';
            s+= '0';
        }else{
            s[t-1] = s[t-1]+1;
        }
        return enc;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return hash[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));

// int HashCode (const std::string &str) {
//     int h = 0;
//     for (size_t i = 0; i < str.size(); ++i)
//         h = h * 31 + static_cast<int>(str[i]);
//     return h;
// }
