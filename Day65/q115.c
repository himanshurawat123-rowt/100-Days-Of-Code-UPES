/*
Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). 
The task is to determine if s and t are valid anagrams, meaning they contain the same characters 
with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/

#include <stdio.h>
#include <string.h>

int isAnagram(char *s, char *t) {
    int len_s = strlen(s);
    int len_t = strlen(t);

    // Agar length alag hai toh anagram possible hi nahi hai
    if (len_s != len_t) {
        return 0;
    }

    // 26 lowercase English alphabets ke liye frequency count array
    int freq[26] = {0};

    // Ek string ke characters ke count ko badhao, doosre ke count ko ghatao
    for (int i = 0; i < len_s; i++) {
        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;
    }

    // Check karo kya saare counts zero hain
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char s[10005], t[10005];

    if (scanf("%s %s", s, t) != 2) {
        return 0;
    }

    if (isAnagram(s, t)) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }

    return 0;
}
