#include <iostream>
#include <vector>
#include <bitset>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_cases;
    cin >> test_cases;

    while (test_cases--) {
        long long total_questions, question_lists, known_answers;
        cin >> total_questions >> question_lists >> known_answers;

        vector<int> missing(question_lists);
        for (int i = 0; i < question_lists; ++i) {
            cin >> missing[i];
        }

        bitset<300000 + 1> known_bits;
        for (int i = 0; i < known_answers; ++i) {
            int known_question;
            cin >> known_question;
            known_bits.set(known_question);
        }

        int total_known = known_bits.count();

        string output;
        output.reserve(question_lists);

        for (int i = 0; i < question_lists; ++i) {
            bool can_pass = false;
            if (total_known == total_questions) {
                can_pass = true;
            } else if (total_known == total_questions - 1 && !known_bits.test(missing[i])) {
                can_pass = true;
            }
            output += (can_pass ? '1' : '0');
        }

        cout << output << "\n";
    }

    return 0;
}
