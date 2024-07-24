class Solution {
public:
    bool isValid(string word) {
         if (word.size() < 3) {
        return false;
    }

   string vowels = "aeiouAEIOU";
    bool is_vowel = false;
    bool is_consonant = false;

    for (char c : word) {
        if (!isalpha(c) && !isdigit(c)) {
            return false;
        }
        if (vowels.find(c) != string::npos) {
            is_vowel = true;
        } else if (isalpha(c)) {
            is_consonant = true;
        }
    }

    return is_vowel && is_consonant;
    }
};