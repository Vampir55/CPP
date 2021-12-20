#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector names = {"Jared Letto", "Stoom Cooper", "Lizabeth Barren"};

  for (string name : names) {
    cout << "Hello, " << name << "! Nice to meet you!" << endl;
  }
}
