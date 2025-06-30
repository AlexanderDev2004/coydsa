// questions : Two Sum
// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
//You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.

// Example 1:

//Input: nums = [2,7,11,15], target = 9
//Output: [0,1]
//Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

//Example 2:

//Input: nums = [3,2,4], target = 6
//Output: [1,2]
//Example 3:

//Input: nums = [3,3], target = 6
//Output: [0,1]


class Solution
{
public:
// // Fungsi twoSum menerima vector angka (nums) dan target yang ingin dicapai
    vector<int> twoSum(vector<int> &nums, int target)
    {
        // Membuat hash map untuk menyimpan angka dan indeksnya
        unordered_map<int, int> numMap;
        // Menyimpan panjang dari vector nums
        int n = nums.size();
        // Looping untuk setiap elemen dalam vector
        for (int i = 0; i < n; i++)
        {
            // Menghitung angka pelengkap agar jumlahnya = target
            int complement = target - nums[i];
            // Cek apakah angka pelengkap sudah pernah ditemui (ada di hash map)
            if (numMap.count(complement))
            {
                // Jika ditemukan, kembalikan indeks dari pelengkap dan indeks sekarang
                return {numMap[complement], i};
            }
            // Jika belum ditemukan, simpan angka sekarang dan indeksnya ke hash map
            numMap[nums[i]] = i;
        }
        // Jika tidak ditemukan pasangan yang sesuai, kembalikan vector kosong
        return {};
    }
};