
#include "CitricAcid.h"



CitricAcid::CitricAcid():
	Species(std::vector<std::string> {"C6H8O7", "C6H7O7 -", "C6H6O7 2-", "C6H5O7 3-"},
			std::vector<double> {192.12, 191.11, 190.11, 189.11},
			std::vector<double> {3.13, 4.76, 6.4}){
}


CitricAcid::~CitricAcid() {
}
