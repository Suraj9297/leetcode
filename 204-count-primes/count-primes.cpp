class Solution {
public:
    int countPrimes(int n) {
        if(n<2){
            return 0;
        }
        vector<int> num(n,0);
        int c=0;int i=2;
        while(i<n){
            if(num[i]==0){
                c++;
                for(int j=2;j*i<n;j++)
                    num[j*i]=1;
            }
            i++;
        }
        return c;

        
    }
};

            // if(n<2){
            //     return 0;
            // }
            // vector<int>num(n,0);
            // int c=0;i=2;
            // while(i<n){
            //     if(num[i]==0){
            //         c++;
            //         for(int j=2;j*i<n;j++)
            //     }
            // }