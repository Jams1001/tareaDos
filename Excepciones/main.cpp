#include "signatures.hpp"
#include <iostream>
#include <vector>
#include <limits>

int main() {
  // Use a try-catch block to catch the custom exception (0)
  try {
    // Throw the custom exception
    throw MyException(); // Se fuerza una excepción, digamos
  } catch (std::exception& e) {
      // Catch the exception and display the error message
      std::cout << "Error: " << e.what() << std::endl;
  }

  // Disparar std::out_of_range exception (1)
  try {
    std::vector<int> vec{1, 2, 3};
    std::cout << vec.at(4) << std::endl; // Intenta imprimir un elemento inexistente
  } catch (const std::out_of_range& e) {
      std::cout << "Error: " << e.what() << std::endl;
  }

  // Disparar std::invalid_argument exception (2)
  std::string input = "abc123"; // Una cadena con caracteres no numéricos
  try {
    int number = std::stoi(input); // Intenta convertir la cadena a entero
    std::cout << "El número es: " << number << std::endl;
  } catch (const std::invalid_argument& e) {
      std::cout << "Error: " << e.what() << std::endl;
  }  

  // Disparar std::overflow_error exception (3)
  // Declare two integers, one with the maximum value for an int
  int a = std::numeric_limits<int>::max(); // Literalmente el número más grande 
  int b = 2;
  try {
    // Check if the multiplication of a and b would cause an arithmetic overflow
    if (a > 0 && b > 0 && a > (std::numeric_limits<int>::max() / b)) {
      // If an overflow is detected, throw an overflow_error exception
      throw std::overflow_error("Desbordamiento aritmético"); //En este caso no es automático pero podríamos hacer una función que así lo haga
    }
    // If the multiplication was successful, print the result
    int result = a * b;
    std::cout << "Resultado: " << result << std::endl;
  } catch (const std::overflow_error& e) {
      std::cout << "Error: " << e.what() << std::endl;
  }
  return 0;


}
