#include <iostream>

// Homework 5 — Andres Valenzuela
// CIS 5 Week 05 · Rule engine lite

int main() {
  int score = 0;
  int attendance = 0;

  // TODO: cout question, then cin, for score and for attendance
  std::cout << "What is your score?\n";
  std::cin >> score;
  std::cout << "What is your attendance rate?\n";
  std::cin >> attendance;


  bool pass = score >= 70;
  bool passing_attendance = attendance >= 75;
  
  // Edge Values
  // score: 69 (just below), 70 (exactly on), 71 (just above)
  // passing_attendance: 74 (just below), 75 (exactly on), 76 (just above)
  
  // TODO: invalid branch FIRST — out-of-range input gets its own message

  if (score < 0 || score > 100 || attendance > 100 || attendance < 0) { std::cout << "Invalid score\n"; }
     else if (pass && passing_attendance) { std::cout << "Result: Pass!\n"; }
     else if (pass || !passing_attendance) { std::cout << "Fail: attendance requirement not met!\n"; }
     else { std::cout << "Fail: score requirement not met!\n"; }

  // TODO: two comments that explain a choice (why invalid first, why && not ||, why >= not >)
  // You put the invalid first so the program will find the impossible scores or impossible attendance rates before even deciding if someone passes
  // You use && because the person met both requirment, and we use >= to show to the score being greater than or equal to 70 or 75 is passing
 
  return 0;
}
