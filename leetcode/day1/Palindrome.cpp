//questions : Palindrome Number
// link : https://leetcode.com/problems/palindrome-number

// Given an integer x, return true if x is a palindrome, and false otherwise.

// Example 1:

// Input: x = 121
// Output: true
// Explanation: 121 reads as 121 from left to right and from right to left.
// Example 2:

// Input: x = -121
// Output: false
// Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
// Example 3:

// Input: x = 10
// Output: false
// Explanation: Reads 01 from right to left. Therefore it is not a palindrome.


class Solution {
public:
    bool isPalindrome(int x) {
        // Angka negatif bukanlah palindrome
        if (x < 0) return false;

        // Mengubah integer menjadi string
        string str = to_string(x);
        
        // Inisialisasi dua pointer, satu di awal dan satu di akhir string
        int left = 0, right = str.size() - 1;

        // Memeriksa karakter dari kedua ujung menuju ke tengah
        while (left < right) {
            if (str[left] != str[right]) {
                return false; // Jika karakter tidak cocok, itu bukan palindrome
            }
            left++;
            right--;
        }
        
        return true; // Jika semua karakter cocok, itu adalah palindrome
        
    }
};