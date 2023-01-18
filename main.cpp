#include "caesar.h"

#include <iostream>

int main() {
    std::string mad = caesar_encrypt("Az DsaYiU", 543);
    std::cout << caesar_decoder(mad, 543);
}