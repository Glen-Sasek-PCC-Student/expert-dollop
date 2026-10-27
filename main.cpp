// ------------- FILE HEADER -------------
// Author ✅: 
// Assignment ✅:
// Date ✅:
// Citations: 


// ------------- CODE -------------
#include <iostream>

using namespace std;

// Function prototypes (if any)


// Main function
// https://en.cppreference.com/w/cpp/language/main_function.html
int main() {
  cout << "L00PS" << endl;

  cout << endl;
  cout << "for(int i = 0; i < 10; i++)" << endl;
  for(int i = 0; i < 10; i++) // i++ or ++i increment operator abbreviation i = i + 1
  {
    cout << i << endl;
  }

  // for(INITIALIZATION; LOOP INVARIANT; POST EXPRESSION) 
  // {
  //   LOOP BODY
  //   Executed if LOOP INVARIANT expression is true
  // }

  cout << endl;
  cout << "for(; i < 10;)" << endl;
  // Rewriting with initialization before and post at end of loop
  int i = 0;
  for(; i < 10;)  
  {
    cout << i << endl;
    i++;
  }

  cout << endl;
  cout << "while(i < 20) " << endl;
  while(i < 20) 
  {
    cout << i << endl;
    i++;
  }

  cout << endl;
  cout << "for(int n = 0; n < 10; n++)" << endl;
  int n;
  for(n = 0; n < 10; n++)
  {
    cout << n << endl;
  }


  return 0;
}

// Function implementations (if any)


// ------------- DESIGN -------------
/* 
Program Name:

Program Description:

Design:
A. INPUT
Define the input variables including name data type. 

B. OUTPUT
Define the output variables including data types. 

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt


SAMPLE RUNS
Copy from assignment document.

*/
