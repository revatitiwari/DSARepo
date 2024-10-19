// Easy approach but time taking

bool findElement(vector<int> arr, int target) {
             auto it = find(arr.begin(), arr.end(), target);

                // Check if the target value was found
                if (it!=arr.end())
                    return true;
                else
                    return false;
        }


class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;

        if(nums1.size() > nums2.size() ) {
            for(int i=0; i<nums2.size(); i++) {
                if(findElement(nums1, nums2[i])) {
                    if(!findElement(res, nums2[i])) {
                        res.push_back(nums2[i]);
                    }
                }
            }
        } else {
             for(int i=0; i<nums1.size(); i++) {
                if(findElement(nums2, nums1[i])) {
                    if(!findElement(res, nums1[i])) {
                        res.push_back(nums1[i]);
                    }
                }
            }
        }

        return res;
    }
};



