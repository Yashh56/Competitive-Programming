class Solution {
public:
    string defangIPaddr(string a) {
        int n = a.length();
        string replace_word = ".";
        string replace_by = "[.]";
        size_t pos = a.find(replace_word);

        while (pos != string::npos) {
            a.replace(pos, replace_word.size(), replace_by);
            pos = a.find(replace_word, pos + replace_by.size());
        }
        return a;
    }
};
