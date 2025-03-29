#include <iostream>
#include <vector>
int main() {
  //Defined strings
  
  
  void outcome(std::string useroutcome, std::string computeroutcome);

  std::string computerchoice;
  std::string userchoice;

  std::vector<std::string> choices {"rock", "paper", "scissors"};

  srand (time(NULL));
  
  int random = rand() %3;
  
  computerchoice = choices[random];
  std::cout<<"Welcome to rock paper scissors\n";
  std::cin>>userchoice;

  if (userchoice == "rock" && computerchoice == "rock") {
    outcome(userchoice, computerchoice); 
  }





}
