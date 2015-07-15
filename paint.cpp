class Solution {
	public:
		
        bool isPossible(long long _Max, int K, vector<int> &Vec) {
            
            int _max_ele = *max_element(Vec.begin(), Vec.end());
            if(_max_ele > _Max)
                    return false; 
            
            long long Sum = 0;
            int cnt = 1;
            int N = Vec.size();

            for(int i = 0; i < N;) {
                if(Sum + ((long long)Vec[i]) > _Max) {
                    Sum = 0;
                    cnt++;
                } else {
                    Sum += ((long long)Vec[i]);
                    i++;
                }
            }

            if(cnt <= K)
                    return true;
            return false;
        }

        
        long long paint(int K, int T, vector<int> Vec) {
		    
            int N = Vec.size();
            
            long long end = 0;
            long long start = 0;

            for(int i = 0; i < N; ++i) {
                end += Vec[i];
            }
            long long ans = INT_MAX;
            ans *= INT_MAX;
            while(start <= end) {
                long long mid = (start + end) / 2;
                if(isPossible(mid, K, Vec)) {
                    ans = min(ans, mid);
                    end = mid - 1;
                } else {
                    start = mid + 1;
                }
            }
            
            return (ans * (long long) T) % 10000003;
	}
};
