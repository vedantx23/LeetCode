class Solution {
public:
    int hammingWeight(int n) {
        int num = n;
        int sum = 0;
        while(num!=0){
            sum = sum+num%2;
            num=num/2;
        }
        return sum;
    }
};