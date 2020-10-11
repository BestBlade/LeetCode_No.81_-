/* ------------------------------------------------------------------|
假设按照升序排序的数组在预先未知的某个点上进行了旋转。

( 例如，数组 [0,0,1,2,2,5,6] 可能变为 [2,5,6,0,0,1,2] )。

编写一个函数来判断给定的目标值是否存在于数组中。若存在返回 true，否则返回 false。

示例 1:

输入: nums = [2,5,6,0,0,1,2], target = 0
输出: true
示例 2:

输入: nums = [2,5,6,0,0,1,2], target = 3
输出: false

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/search-in-rotated-sorted-array-ii
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。|
------------------------------------------------------------------*/

/*	双指针双向搜索法
*
*	执行用时：4 ms, 在所有 C++ 提交中击败了97.03%的用户
*	内存消耗：6.2 MB, 在所有 C++ 提交中击败了99.69%的用户
*/

#include <iostream>
#include <string> 
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <map>

using namespace std;

bool search(vector<int>& nums, int target) {
	if (nums.size() == 0) {
		return false;
	}

	if (nums.size() == 1) {
		return(nums[0] == target) ? true : false;
	}

	int head = 0;
	int tail = nums.size() - 1;
	while (head <= tail) {
		if (nums[head] == target || nums[tail] == target) {
			return true;
		}
		head++;
		tail--;
	}
	return false;
	//while (head <= tail) {
	//	int mid = (head + tail) / 2;
	//	if (nums[mid] == target) {
	//		return true;
	//	}
	//	if (nums[mid] >= nums[head]) {
	//		if (nums[mid] != nums[head] && target >= nums[head] && target <= nums[mid]) {
	//			tail = mid - 1;
	//		}
	//		else {
	//			head++;
	//		}
	//	}
	//	else {
	//		if (target >= nums[mid] && target <= nums[tail]) {
	//			head = mid + 1;
	//		}
	//		else {
	//			tail = mid - 1;
	//		}
	//	}
	//}
	//return false;
}

int main(){
	vector<int> nums{ 2,5,6,0,0,1,2 };
}