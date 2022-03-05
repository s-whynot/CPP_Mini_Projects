#include <iostream>
#include <vector>

int main() {
  std::vector<int> num_seq = {2, 4, 3, 6, 1, 9};
  int sum_even = 0, product_odd = 1;

  for (int i = 0; i < num_seq.size(); i++) {
    if (num_seq[i] % 2 == 0) {
      sum_even += num_seq[i];
    }
    else {
      product_odd = product_odd * num_seq[i];
    }

  }

  std::cout << "Sum of even numbers is " << sum_even << "\n";

  std::cout << "Product of odd numbers is " << product_odd << "\n";
}
