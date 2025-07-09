class Solution {
public:

    bool isFreqSame(int winDFreq[] , int freq[]){
        for (int i =0; i<26; i++){
            if(winDFreq[i] != freq[i])
                return false;
        }
        return true;
    } 


    bool checkInclusion(string s1, string s2) {
        int freq[26]= {0};

        for(int i=0; i<s1.length(); i++)
        {
            freq[s1[i] - 'a']++;

        }
         
        int windowSize = s1.length();

        for(int i = 0; i<=s2.length(); i++){
            int windIndex = 0, indx = i;
            int winDFreq[26]= {0};

            while(windIndex < windowSize && indx < s2.length()  ){
                
                winDFreq[s2[indx] - 'a']++;
                windIndex++;
                indx++;

            }

            if(isFreqSame(winDFreq,freq)){
                return true;
            }

        }
        return false;
    }
};
