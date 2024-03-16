int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here

	if(x>arr[n-1])
		return n;
	if(x<arr[0])
		return 0;

		int l=0,r=n,mid,ans=0;
		
 while (l <= r) {
        int mid = (l + r) / 2;
        // maybe an answer
        if (arr[mid] >= x) {
            ans = mid;
            //look for smaller index on the left
            r = mid - 1;
        }
        else {
            l = mid + 1; // look on the right
        }
    }
    return ans;
}
