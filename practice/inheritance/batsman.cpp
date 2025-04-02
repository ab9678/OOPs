// person class name and age, batsmen inherit the person and have odi etc.
# include <string>
# include <iostream>
using namespace std;

class person{

    protected:
    string name;
    int age;

    person(){
        cout << "Name: ";
        cin >> name;

        cout << "Age: ";
        cin >> age;
    }

};

class batsman: protected person{
    int runTaken, battingAvg, odiPlayed, halfCen, fullCen, strikeRate;
    public:
    batsman(){
        cout << "Runs Taken: ";
        cin >> runTaken;

        cout << "Batting Average: ";
        cin >> battingAvg;

        cout << "ODIs Played: ";
        cin >> odiPlayed;

        cout << "Half Centuries: ";
        cin >> halfCen;

        cout << "Full Centuries: ";
        cin >> fullCen;

        cout << "Strike Rate: ";
        cin >> strikeRate;
    }

    void display(){
        cout << "Name: " << name<<endl;
        cout << "Age: " << age<<endl;
        cout << "Runs Taken: " << runTaken << endl;
        cout << "Batting Average: " << battingAvg << endl;
        cout << "ODIs Played: " << odiPlayed << endl;
        cout << "Half Centuries: " << halfCen << endl;
        cout << "Full Centuries: " << fullCen << endl;
        cout << "Strike Rate: " << strikeRate << endl;
    }
};

int main(){
    batsman B1;
    B1.display();
}