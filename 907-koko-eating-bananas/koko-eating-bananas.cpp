class Solution {
public:
    int findMax(vector<int> &v){
        int maxi = INT_MIN;
        int n = v.size();
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, v[i]);
        }
        return maxi;
    }

    int calculateTotalHours(vector<int> &v, int hourly) {
        long long th = 0;
        int n = v.size();
        for (int i = 0; i < n; i++) {
            th += (v[i] + hourly - 1) / hourly;  // Equivalent to ceil(v[i] / hourly)
            if (th > 1e9) return th;  // Stop early if hours exceed h
        }   
        return th;
    }

    int minEatingSpeed(vector<int> &v, int h) {
        int low = 1, high = findMax(v);
        while (low <= high) {
            int mid = low + (high - low) / 2; // Prevents overflow
            int th = calculateTotalHours(v, mid);
            if (th <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};