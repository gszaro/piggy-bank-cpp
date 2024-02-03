#include <iostream>

int main() {
  double pesos, reais, soles, dollars;

  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;
  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;
  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;
// Pesos 0.058
// Reais 0.20
// Soles 0.26
  dollars = (0.058 * pesos) + (0.20 * reais) + (0.26 * soles);

  std::cout << "US Dollars = $" << dollars;
}