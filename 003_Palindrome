//leedcode 9. Palindrome Number
//Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.
//example 1: Input: 121
//Output: true
//exmaple 2: Input: -121
//Output: false
//Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
//exmaple 3:Input: 10
//Output: false
//Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
//Coud you solve it without converting the integer to a string?

class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> digits; //store every digit of the number in the vector 
        if (x<0){
            return false;
        }
        int y1,y2; //y1:quotient; y2: reminder;
        y1=x/10;
        y2=x%10;
        digits.push_back(y2);
        int i=1;
        while (y1!=0){
            y2=y1%10;
            digits.push_back(y2); //cout<<digits[i]<<endl;
            i=i+1;
            y1=y1/10;
        }
        for (int j=0; j<ceil(i/2); j++){ //compare the mirror digits
            if (digits[j]!=digits[i-1-j]){
                return false;
            }
        }
        return true;    
    }
};
