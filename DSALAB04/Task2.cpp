//#include <iostream>
//#include <queue>
//#include <vector>
//#include <cstdlib>
//#include <ctime>
//
//void reverseFirstKElements(std::queue<int>& q, int K) {
//    if (K <= 0 || K > q.size()) {
//        std::cout << "Invalid value of K. Must be between 1 and " << q.size() << ".\n";
//        return;
//    }
//
//    std::vector<int> temp;
//    for (int i = 0; i < K; ++i) {
//        temp.push_back(q.front());
//        q.pop();
//    }
//
//    for (int i = K - 1; i >= 0; --i) {
//        q.push(temp[i]);
//    }
//
//    int remainingSize = q.size() - K;
//    for (int i = 0; i < remainingSize; ++i) {
//        q.push(q.front());
//        q.pop();
//    }
//}
//
//void printQueue(const std::queue<int>& q) {
//    std::queue<int> temp = q;
//    std::cout << "Final queue: ";
//    while (!temp.empty()) {
//        std::cout << temp.front() << " ";
//        temp.pop();
//    }
//    std::cout << "\n";
//}
//
//int main() {
//    std::queue<int> myQueue;
//    std::srand(std::time(0));
//
//    std::cout << "Inserting 8 random numbers into the queue:\n";
//    for (int i = 0; i < 8; ++i) {
//        int randomNum = std::rand() % 100 + 1; // Random numbers between 1 and 100
//        myQueue.push(randomNum);
//        std::cout << "Inserted: " << randomNum << "\n";
//    }
//
//    int K;
//    std::cout << "Enter the value of K (number of elements to reverse): ";
//    std::cin >> K;
//
//    if (K <= 0 || K > myQueue.size()) {
//        std::cout << "Invalid value of K. Must be between 1 and " << myQueue.size() << ".\n";
//        return 0;
//    }
//
//    reverseFirstKElements(myQueue, K);
//    printQueue(myQueue);
//
//    return 0;
//}
