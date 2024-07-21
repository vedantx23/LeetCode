class Solution {
public:
    int reverse(int x) {
        long long reverse = 0;
        long long temp = x;
        while(temp!=0){
            if(reverse>INT_MAX/10 || reverse<INT_MIN/10) return 0;
            int digit = temp%10;
            reverse = reverse*10 + digit;
            temp = temp/10;
        }
        return reverse;
    }
};