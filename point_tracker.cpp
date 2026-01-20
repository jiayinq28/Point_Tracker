#include <iostream>
#include <vector>
#include <cmath>
#include <limits>
#include <algorithm>

using namespace std;
class PointTracker {
    private:
        vector<string> all_uniquenames;
        vector<string> participant_names;
        int size = 0;

    public:
        void header() {
            cout << "----------------------------------------\n";
            cout << "      Point Tracker Application        \n";
            cout << "----------------------------------------\n";
        }

        void input_parameters() {
            cout << "\nPlease enter the number of the first uniquename: ";
            int first;
            cin >> first;
            cout << "\nPlease enter the number of the last uniquename: ";
            int last;
            cin >> last;
            size = last - first + 1;
            all_uniquenames.reserve(size);
        }

        void input_uniquenames() {
            cout << "\nPlease enter all SWE uniquenames: \n";
            string uniquenames; 
            while (cin >> uniquenames) {
                all_uniquenames.push_back(uniquenames);
            }
        }

        void partipant_tracker() {
            cout << "\nPlease enter participant uniquenames: \n";
            string participant_name;
            while (cin >> participant_name) {
                participant_names.push_back(participant_name);
            }
            sort(participant_names.begin(), participant_names.end());
        }

        bool is_participant(const string& name) {
            return binary_search(participant_names.begin(), participant_names.end(), name);
        }

        
};


int main() {
    PointTracker pt;
    pt.header();
    pt.input_parameters();
    pt.input_uniquenames();
    pt.partipant_tracker();
    return 0;
}