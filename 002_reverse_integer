//leedcode7. Reverse Integer

//Given a 32-bit signed integer, reverse digits of an integer.
//Example 1:
//Input: 123
//Output: 321

//Example 2:
//Input: -123
//Output: -321

//Example 3:
//Input: 120
//Output: 21
//Note:

//Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−231,  231 − 1]. For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.

class Solution {
public:
    int reverse(int x) {
         int x1;
            if (x<0) {  
                x1=x*(-1);}
            else{
                x1=x;
            }
            int z=0; //target 
            int y1,y2,y1p,zp; // y1: quotient;  y2: reminder; p: previous 
    y1=x1;
    y2=y1%10;  //std::cout<<y<<endl;
    z=y2; //cout<<z<<endl;
    y1=y1/10;
            while(y1!=0){     
                y2=y1%10; //std::cout<<y2<<endl;
                zp=z;
                z=z*10+y2; //cout<<z<<endl; 
                if (z/10!=zp){ //detect overflow
                    cout<<"large"<<endl;
                    z=0;
                    return z;
                }
                y1=y1/10;
            }
   //std::cout<<"finished"<<endl;
            if (x<0){
                z=z*(-1);
            }   
    return z;
    }
};
