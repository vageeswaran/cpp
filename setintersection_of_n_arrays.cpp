#include <iostream>
#include <vector>
using namespace std;

void catchUpTarget(const vector<int> &arr, int &start, int target) {
	while(start < arr.size() && arr[start] < target)
		++start;
}

vector<int> searchCommonElements(vector<vector<int>> &arrays) {
	int N = arrays.size();
	vector<int>	result;
	if(N < 2) return result;

	vector<int>	startPosArr(N, 0);
	int target = 0, targetCnt = 0;
	while(true) {
		for(int i = 0; i < N; ++i) {
			if(startPosArr[i] >= arrays[i].size())
				return result;
		}

		target = arrays[0][startPosArr[0]];  targetCnt = 1;
		for(int i = 1; i < N; ++i) {
			catchUpTarget(arrays[i], startPosArr[i], target);
			if(startPosArr[i] < arrays[i].size() && target == arrays[i][startPosArr[i]])
				++targetCnt;
		}

		if(targetCnt == N)
			result.push_back(target);

		catchUpTarget(arrays[0], startPosArr[0], target + 1);	
	}
	return result;
}

int main() {
	int ar1[] = {1, 5, 10, 20, 40, 80, 80, 120, 145, 145, 200};
    int ar2[] = {6, 7, 20, 80, 80, 100, 143, 145};
    int ar3[] = {3, 4, 15, 20, 30, 70, 80, 120, 120, 145};
	int ar4[] = {3, 4, 15, 20, 30, 70, 80, 120, 145, 200};
    int n1 = sizeof(ar1)/sizeof(ar1[0]);
    int n2 = sizeof(ar2)/sizeof(ar2[0]);
    int n3 = sizeof(ar3)/sizeof(ar3[0]);
	int n4 = sizeof(ar4)/sizeof(ar4[0]);

	vector<int>	v1(ar1, ar1 + n1);
	vector<int>	v2(ar2, ar2 + n2);
	vector<int>	v3(ar3, ar3 + n3);
	vector<int>	v4(ar4, ar4 + n4);
	vector<vector<int>> arrays;
	arrays.push_back(v1);
	arrays.push_back(v2);
	arrays.push_back(v3);
	arrays.push_back(v4);

	vector<int> result = searchCommonElements(arrays);

	cout << "Common Elements in the " << arrays.size() << " arrays are:" << endl;
	for(int i = 0; i < result.size(); ++i)
		cout << result[i] << "  ";
	cout << endl;
	return 0;
}
