#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

class Airbnb{
    private:    //Private class to hold Airbnb information.
        string room_type;
        string room_private;        
        double cleanliness_rating;
        int person_capacity;
        int guest_satisfaction_overall;

    public:
        Airbnb(string rt, string rp, double cr, int pc, int gso)
            : room_type(rt), room_private(rp), cleanliness_rating(cr),
              person_capacity(pc), guest_satisfaction_overall(gso) {}
        
        void printDetails() { //Display function informaton.
            cout << "__________________ Information __________________" << endl;
            cout << "Room Type: " << room_type << endl;
            cout << "Room Private: " << room_private << endl;
            cout << "Cleanliness Rating: " << cleanliness_rating << endl;
            cout << "Person Capacity: " << person_capacity << endl;
            cout << "Guest Satisfaction Overall: " << guest_satisfaction_overall << endl;
        }
    };

int main() {
    ifstream file("athens_weekdays.csv");
    if (!file.is_open()) {
        cout << "Sorry, file can not be opened.\n";
        return 1;
    }

    string line;
    getline(file, line); // Skips the header line

    int count = 0;
    while (getline(file, line) && count < 10) {
        stringstream ss(line);

        // 5 String variables to hold CSV 
        string realSumStr, room_type, room_shared, room_private;
        string person_capacityStr, host_is_superhost, multi, biz;
        string cleanliness_ratingStr, guest_satisfaction_overallStr;


        getline(ss, realSumStr, ',');
        getline(ss, room_type, ',');
        getline(ss, room_shared, ',');
        getline(ss, room_private, ',');
        getline(ss, person_capacityStr, ',');
        getline(ss, host_is_superhost, ',');
        getline(ss, multi, ',');
        getline(ss, biz, ',');
        getline(ss, cleanliness_ratingStr, ',');
        getline(ss, guest_satisfaction_overallStr, ',');

        Airbnb item(
            room_type,
            room_private,
            stod(cleanliness_ratingStr),
            stoi(person_capacityStr),
            stoi(guest_satisfaction_overallStr)
        );

        item.printDetails();
        count++;
    }
     return 0;
}
