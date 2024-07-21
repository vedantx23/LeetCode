class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> a;
        for(int i =0; i<=n;i++){
            int num = i;
            int sum = 0;
            while(num!=0){
                sum = sum + num%2;
                num=num/2;
            }
            a.push_back(sum);
        }
        return a;
    }
};