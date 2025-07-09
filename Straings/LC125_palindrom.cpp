/*125. Valid Palindrome
Easy
Topics
premium lock icon
Companies
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

 

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.*/



class Solution {
public:

    bool isAlphanumeric(char ch){
        if(('a'<= ch && ch <= 'z') || ('A'<= ch && ch <= 'Z') || ('0'<= ch && ch <= '9')){
            return true;
        }  
        else {
            return false;
        }
    }


    bool isPalindrome(string s) {
        
        int st = 0;
        int end = s.length();

        while(st<end){
            if(!isAlphanumeric(s[st])){
                st++; continue;
            }

             if(!isAlphanumeric(s[end])){
                end--; continue;
            }

            if(tolower(s[st])!=tolower(s[end])){
                return false;
            }

            st++; 
            end--;

        }
        return true;
    }
};
