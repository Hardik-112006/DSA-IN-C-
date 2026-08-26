class Solution {
public:
    int climbStairs(int n) {
      
         int i,first,last,next;

if(n==0 || n == 1)
return 1;

    first = 1;
    last = 2;
 

 
    for(i=2;i<n;i++){
     next = first + last;

     first = last;
     last = next;
    }
    return last;
    }
};
    