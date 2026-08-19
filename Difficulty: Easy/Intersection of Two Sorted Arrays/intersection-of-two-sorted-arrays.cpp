class Solution {
	public:
	vector<int> intersection(vector<int> &arr1, vector<int> &arr2) {
		vector<int> ans;
		
		int a = 0;
		int b = 0;
		
		while (a < arr1.size() && b < arr2.size()) {
			if (arr1[a] == arr2[b]) {
				if (ans.empty() || ans.back() != arr1[a])
					{ans.push_back(arr1[a]); }
				a++;
				b++;
			}
			else if (arr1[a] < arr2[b]) {
				a++;
			}
			else if (arr1[a] > arr2[b]) {
				b++;
			}
		}
		return ans;
	}
};
