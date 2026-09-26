// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start,mid,end;
        start = 1;
        end = n;
        int answer;

    while(start<=end){
        mid = start + (end-start)/2;

        if(isBadVersion(mid)){
         answer = mid;
         end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return answer;
    }
};