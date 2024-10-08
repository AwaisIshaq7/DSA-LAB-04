//#include <iostream>
//#include<iomanip>
//#include <queue>
//
//using namespace std;
//
//int main() {
//   queue<int> myQueue;
//    int number;
//
//   cout << "Queue Operations\n";
//
//   cout << "Please enter 10 numbers to insert into queue:\n";
//    for (int i = 0; i < 10; ++i) {
//       cout << "Enter number " << (i + 1) << ": ";
//       cin >> number;
//
//        myQueue.push(number);
//       cout << "Inserted: " << number << "\n";
//       cout << "Current Front: " << myQueue.front() << ", Current Back: " << myQueue.back() << endl;
//       cout << "-------------------------\n";
//    }
//
//   cout << "\n=== Removing Numbers from the Queue ===\n";
//    while (!myQueue.empty()) {
//       cout << "Before removal - Front: " << myQueue.front() << ", Back: " << myQueue.back() << endl;
//       cout << "Removed: " << myQueue.front() << "\n";
//        myQueue.pop();
//       cout << "-------------------------\n";
//
//        if (!myQueue.empty()) {
//            cout << "After removal - New Front: " << myQueue.front() << ", New Back: " << myQueue.back() << endl;
//        }
//        else {
//           cout << "The queue is now empty.\n";
//        }
//       cout << "-------------------------\n";
//    }
//
//   cout << "=== All numbers have been removed from the queue. ===\n";
//
//    return 0;
//}
