#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool validPalindrome(string s) {
        for(int i=0,j=s.size()-1; i<j; i++,j--){
            if(s[i] != s[j]){
                return testLrR(s,i,j-1) || testLrR(s,i+1,j);
            }
        }
        return true;
    }

private:
    bool testLrR(string s,int i,int j){
        while(i<j){
            if(s[i] != s[j]){
                return false;
            }
        }
        return true;
    }
};