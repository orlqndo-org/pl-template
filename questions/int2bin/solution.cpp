#include <string> 

std::string int2bin(unsigned int numero) {
  std::string res;

  if (!numero)
    return "0";

  while (numero) {
    res = ((numero & 1) ? "1" : "0") + res;
    numero >>= 1;
  }
  return res;
}