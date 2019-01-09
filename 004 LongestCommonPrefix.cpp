//14. Longest Common Prefix
//Write a function to find the longest common prefix string amongst an array of strings.
//If there is no common prefix, return an empty string "".
//Example 1:

//Input: ["flower","flow","flight"]
//Output: "fl"
//Example 2:

//Input: ["dog","racecar","car"]
//Output: ""
//Explanation: There is no common prefix among the input strings.
//Note:
/All given inputs are in lowercase letters a-z.

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int len=strs.size();
        int len1_min=INT_MAX;
        vector<vector<char>> words;       
        vector<char> common;
        string w; 
        //string str("");
        common.push_back('\0');
       
        //store strings into vector of charaters 
        if(len==0){
            string str(common.begin(),common.end());
            return str;
        }
        else{
            for (int i=0; i<len; i++){     
                vector<char> word;
                w=strs[i];
                //cout<<w<<endl;
                int len1=w.length();
                if (len1<len1_min){
                    len1_min=len1;
                }   
                for(int j=0; j<len1;j++){
                    //cout<<w[j]<<endl;
                    word.push_back(w[j]);     
                }
                //for (int k=0; k<len1; k++){
                  //  cout<<word[k]<<endl;
                //}
                words.push_back(word);
            }
            //for(int i=0;i<len;i++){
              //  for(int j=0;j<len1_min;j++){
                //    cout<<words[i][j]<<endl;
                //}
            //}
            //cout<<words.size();
            if(len==1){
                string str(words[0].begin(),words[0].end());
                return str;
            }
            
            //find the common string 
            else{
                for(int j=0; j<len1_min; j++){
                    for(int i=1; i<len; i++){                   
                        //cout<<i<<" "<<words[i][j]<<endl;    
                            if(words[i][j]!=words[i-1][j]){
                                string str(common.begin(),common.end());
                                //cout<<j<<" "<<common[j-1]<<endl;
                                return str;
                            }
                            else if(words[i][j]==words[i-1][j]&& i==len-1){
                                //cout<<words[i][j]<<endl;
                                if (j==0){
                                    common[0]=words[i][j];
                                }
                                else{
                                    common.push_back(words[i][j]);        
                                }
                            }
                  }
                }
            }
        }
        string str(common.begin(),common.end());
        return str; 
    }
};
