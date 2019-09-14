// Sales prediction
#include<iostream>

int main()
  {
    int year_2018 = 2103419277;
    int year_2019 = (2103419277 * .18);

    //gives you the sales from last year
    std::cout << "Last years sales were $ " <<year_2018 << std::endl;

    //gives the amount of the predicted sales
    std::cout << "This years sales prediction: $ "<<year_2019;
    return 0;

  }
