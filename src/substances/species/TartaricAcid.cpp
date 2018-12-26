#include "TartaricAcid.h"



TartaricAcid::TartaricAcid():
	Species(std::vector<std::string> {"C4H6O6", "C4H5O6 -", "C4H4O6 2-"},
	std::vector<double> {150.09, 149.09, 148.08},
	std::vector<double> {2.89, 4.40}) {
}


TartaricAcid::~TartaricAcid() {
}
