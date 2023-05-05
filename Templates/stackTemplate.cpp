/**
Licencia MIT

Copyright (c) [2023] Tarea 2 - Grupo 2 - IE 0217 - I Ciclo 2023

Se concede aquí, sin cargo, a cualquier persona que obtenga una copia de este
software y los archivos de documentación asociados (el "Software"), para
utilizar el Software sin restricciones, incluyendo, sin limitación, los
derechos para usar, copiar, modificar, fusionar, publicar, distribuir,
sublicenciar y/o vender copias del Software, y para permitir a las personas a
quienes se les proporcione el Software que lo hagan, sujeto a las siguientes
condiciones:

El aviso de copyright anterior y este aviso de permiso se incluirán en todas
las copias o partes sustanciales del Software.

EL SOFTWARE SE PROPORCIONA "TAL CUAL", SIN GARANTÍA DE NINGÚN TIPO, EXPRESA O
IMPLÍCITA, INCLUYENDO PERO NO LIMITADO A GARANTÍAS DE COMERCIALIZACIÓN,
IDONEIDAD PARA UN PROPÓSITO PARTICULAR Y NO INFRACCIÓN. EN NINGÚN CASO LOS
AUTORES O TITULARES DEL COPYRIGHT SERÁN RESPONSABLES POR NINGUNA RECLAMACIÓN,
DAÑO O OTRA RESPONSABILIDAD, YA SEA EN UNA ACCIÓN CONTRACTUAL, AGRAVIO O DE
OTRO MODO, QUE SURJA DE, FUERA DE O EN CONEXIÓN CON EL SOFTWARE O EL USO U
OTROS ACUERDOS EN EL SOFTWARE.
*/

#include <iostream>
#include <vector>
#include <algorithm>
//#include <stdexcept>
#include <functional>

// Stack class template
template<typename T>
class Stack {
private:
  std::vector<T> data_; // Stack data as a vector

public:
  // Pushes a value onto the stack
  void push(T value) {
    data_.push_back(value);
  }

  // Pops the top value off the stack
  T pop() {
    if (data_.empty()) {
      throw std::out_of_range("Stack is empty");
    }
    T value = data_.back();
    data_.pop_back();
    return value;
  }

  // Clears the stack
  void clear() {
    data_.clear();
  }

  // Checks if the stack is empty
  bool empty() const {
    return data_.empty();
  }

  // Returns the stack size
  std::size_t size() const {
    return data_.size();
  }

  // Applies a function to each element in the stack
  void foreach(const std::function<void(T&)>& func) {
    std::for_each(data_.begin(), data_.end(), func);
  }
};

int main() {
  Stack<int> s;
  s.push(2021);
  s.push(2054);
  s.push(6524);

  std::cout << "Stack size: " << s.size() << std::endl;

  // Print each value in the stack
  s.foreach([](int& value) {
    std::cout << "Value: " << value << std::endl;
  });

  try {
    // Pop all values off the stack and print them
    while (!s.empty()) {
      int value = s.pop();
      std::cout << "Popped value: " << value << std::endl;
    }
    std::cout << "Stack size: " << s.size() << std::endl;
  } catch (const std::exception& e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  // New instance of Stack with std::string type
  Stack<std::string> s_str;
  s_str.push("Holis");
  s_str.push("Ana");
  s_str.push("Me pone 100");
  std::cout << "String stack size: " << s_str.size() << std::endl;
  s_str.foreach([](std::string& value) {
    std::cout << "String value: " << value << std::endl;
  });

  try {
    // Pop all values off the stack and print them
    while (!s_str.empty()) {
      std::string value = s_str.pop();
      std::cout << "Popped string value: " << value << std::endl;
    }
    
    //// Attempt to pop an item from an empty stack
    //std::string value = s_str.pop();
    //std::cout << "Popped value: " << value << std::endl;
    
    std::cout << "String stack size: " << s_str.size() << std::endl;
  } catch (const std::exception& e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }
  return 0;
}
