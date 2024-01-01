class Solution {
public:
    bool isPalindrome(int x) {
        long long original=x;
    long long answer=0;
    while(x!=0){
        int lastdigit=x%10;
        answer=answer*10+lastdigit;
        x=x/10;
    }
    if(answer==original && original>=0){
        return true;
    }
    else{
        return false;
    }
    }
};
