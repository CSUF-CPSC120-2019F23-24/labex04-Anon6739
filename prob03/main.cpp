// Sales prediction
#include <iostream>
#include <string>

int main ()
{
  // CompanyX sales in 2018 and predicted sales in 2019 with an 18% increase
  int total_sales_2018 = 2103419277;

  double percent_increase_2019 = 1.18;

 // Calculating the predicted sales production in 2019
  long sales_production_in_2019 = total_sales_2018 * percent_increase_2019;

// Gathering the respected information to calcuate the predicted sales production in 2019
  std::cout << "Last year's sales were $" << total_sales_2018 << std::endl;

  std::cout << "This year's sales prediction: $" << sales_production_in_2019 << std::endl;











}
