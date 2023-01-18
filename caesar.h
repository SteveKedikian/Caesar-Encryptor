#ifndef CAESAR_H
#define CAESAR_H

#include <string>

enum {
    LETTER_COUNT = 26,
    CAPITAL_A = 65,
    CAPITAL_Z = 90,
    SMALL_a = 97,
    SMALL_z = 122
};

std::string caesar_encrypt(const std::string& line, const int key);
std::string caesar_decoder(const std::string& line, const int key);

#endif // CAESAR_H
