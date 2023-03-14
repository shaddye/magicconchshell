#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {

srand(time(NULL));
int awnser = std::rand() % 5;

int input;
// main code here
std::cout << "What would you like to ask the Magic Conch?" << std::endl;
std::cin >> input;

std::cout << "The Magic Conch says: ";


if( awnser == 0) {
  std::cout << "No.\n";
}
else if( awnser == 1) {
  std::cout << "Sounds like a lot of hooplah.\n";
}
else if( awnser == 2) {
  std::cout << "Maybe someday.\n";
}
else if( awnser == 3) {
  std::cout << "Nothing.\n";
}
else if( awnser == 4) {
  std::cout << "Yes.\n";
}
else if( awnser == 5) {
  std::cout << "Try asking again.\n";
}
else{
  std::cout  << "I don't think so.\n";
}

}
