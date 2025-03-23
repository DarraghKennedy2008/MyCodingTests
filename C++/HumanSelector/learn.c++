#include <iostream>
#include <vector>

int main() {

  int choice;

  std::vector<std::string> humans = {"Joe", "Pat", "Darragh", "John"};
  std::vector<std::string> information = {

    "Joe is very silly lazy guy",
    "Patrick is a awesome smart interesting guy!",
    "'##,..,[[,],.,],,,/[,],/,/,!£$%^&*()_",
    "Something something chloe something never plays something"

  };


  std::cout << "Welcome to the Human library!\n \n";
  std::cout << "These are the humans we have on offer:\n";
  std::cout << "1." << humans[0] << "\n";
  std::cout << "2." << humans[1] << "\n";
  std::cout << "3." << humans[2] << "\n";
  std::cout << "4." << humans[3] << "\n";
  std::cout << "Choose the humans number to get more information on them! \n";
  for (int i = 0; i < 20; i++) {
    std::cout <<"-";
  }
  std::cout << "\n";
  std::cin >> choice;

  switch (choice) {
    
    case 1 :
      std::cout << "Description of " << humans[0] << ":\n";
      std::cout << information[0];
      break;
    case 2 :
      std::cout << "Description of " << humans[1] << ":\n";
      std::cout << information[1];
      break;
    case 3 :
      std::cout << "Description of " << humans[2] << ":\n";
      std::cout << information[2];
      break;
    case 4 :
      std::cout << "Description of " << humans[3] << ":\n";
      std::cout << information[3];
      break;

    default:
      std::cout << "FROM 1-4";
      break;
  }

  

}
