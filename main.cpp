#include <iostream>


using namespace std;



int main() {
  int day;
  cout<<"Enter the day: "<<endl;
  cin>>day;
  switch (day) {
  case 1:
    cout << "Monday: Math(10-11am), Stat(3-4pm)\n";
    break;
  case 2:
    cout << "Tuesday: OOP workshop(9-11am)\n";
    break;
  case 3:
    cout << "Wednesday: Business analysis(1-2pm), OOP lecture(2-3pm), Math (4-5pm)\n";
    break;
  case 4:
    cout << "Thursday: OOP practical(1-3pm)\n";
    break;
  case 5:
    cout << "Friday: Art (9-12am), Stat(2-3pm)\n";
    break;
  case 6:
    cout << "Saturday: No class\n";
    break;
  case 7:
    cout << "Sunday: No class\n";
    break;
    case 8:
    cout << "No match was found";
    break;
  }
  return 0;
}
