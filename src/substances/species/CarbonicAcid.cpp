#include "CarbonicAcid.h"



CarbonicAcid::CarbonicAcid():
	Species(std::vector<std::string> {"H2CO3", "HCO3 -", "CO3 2-"},
			std::vector<double> {62.02, 61.02, 60.01},
			std::vector<double> {6.3, 10.32}){
}


CarbonicAcid::~CarbonicAcid() {
}
