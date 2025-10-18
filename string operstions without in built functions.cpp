#include <iostream>
using namespace std;

class StringOperations {
    char str[100];
public:
    void read() {
        cout << "Enter a string: ";
        cin.getline(str, 100);
    }

    int length() {
        int len = 0;
        while (str[len] != '\0') len++;
        return len;
    }

    void reverse() {
        int len = length();
        cout << "Reversed: ";
        for (int i = len - 1; i >= 0; i--)
            cout << str[i];
        cout << endl;
    }

    void substring(int pos, int len) {
        cout << "Substring: ";
        for (int i = pos; i < pos + len && str[i] != '\0'; i++)
            cout << str[i];
        cout << endl;
    }

    void concatenate(char s2[]) {
        char res[200];
        int i = 0, j = 0;
        while (str[i] != '\0') {
            res[j++] = str[i++];
        }
        i = 0;
        while (s2[i] != '\0') {
            res[j++] = s2[i++];
        }
        res[j] = '\0';
        cout << "Concatenation: " << res << endl;
    }

    void frequency(char ch) {
        int count = 0;
        for (int i = 0; str[i] != '\0'; i++)
            if (str[i] == ch) count++;
        cout << "Frequency of '" << ch << "' = " << count << endl;
    }
};

int main() {
    StringOperations s;
    s.read();
    cout << "Length: " << s.length() << endl;
    s.reverse();
    s.substring(2, 4);
    char s2[100];
    cout << "Enter another string: ";
    cin.getline(s2, 100);
    s.concatenate(s2);
    s.frequency('g');
}

