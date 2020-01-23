
#ifndef LOTTO_UTILITIES_H
#define LOTTO_UTILITIES_H

#include <string>
#include <vector>
#include "basic_types.h"

namespace lotto_base {

std::string convert_ruota_to_string(ruota_t ruota);

std::string str_toupper(std::string s);

ruota_t convert_string_to_ruota(std::string ruota_name);

std::string convert_mese_to_string(mese_t mese);

mese_t convert_string_to_mese(std::string mese_name);

std::vector<std::string> parse_arguments(int argc, char *argv[]);

uint64_t convert_number_non_zero(std::string number_str);

void sort_dates(std::vector<date_t>& dates);

void sort_extractions(std::vector<extraction_t>& ex);

void system_pause(void);

}  // namespace lotto_base

#endif // LOTTO_UTILITIES_H


