/*class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        vector <int> ans(k);
        //If x is less than the first element of the array.
        if(x<arr[0]){
            int j = 0;
            for(int i = 0; i<k; i++){
                ans[j] = arr[i];
                j++;
            }
            sort(ans.begin(),ans.end());
            return ans;
        }

        //If x is greater than the last element of the array
        if(x>arr[n-1]){
            int j = n-1;
            for(int i = 0; i<k; i++){
                ans[i]=arr[j];
                j--;
            }
            sort(ans.begin(),ans.end());
            return ans;
        }

        //If x lies somewhere in the array. We apply binary search to find x.
        int low = 0;
        int high = n-1;
        int t = 0;
        int ub = 0;
        int lb = 0;
        int v = 0;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(arr[mid]==x){
                ans[t] = arr[mid];
                t = t+1;
                v = mid;
                break;
            }
            else if(arr[mid]<x){
                low = mid + 1;
            }
            else{high = mid - 1;}   
        }
        if(t==0){
            ub = low;
            lb = high;
        }
        else{
            ub = v+1;
            lb = v-1;
        }
        while(t<k && lb>=0 && ub<=n-1){
            int d1 = abs(x-arr[lb]);
            int d2 = abs(x-arr[ub]);

            if(d1<=d2){
                ans[t] = arr[lb];
                lb--;
                t++;
            }
            else{
                ans[t] = arr[ub];
                ub++;
                t++;
            }
        }
        if(lb<0){
            while(t<k){
                ans[t]=arr[ub];
                t++;
                ub++;
            }
        }
        else if(ub>n-1){
            while(t<k){
                ans[t]=arr[lb];
                t++;
                lb--;
            }
        }

        sort(ans.begin(),ans.end());
        return ans;

    }
};*/