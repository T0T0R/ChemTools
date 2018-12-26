#include "BenzoicAcid.h"



BenzoicAcid::BenzoicAcid():
	Species(std::vector<std::string> {"C7H6O2", "C7H5O2 -"},
			std::vector<double> {122.12, 122.11},
			std::vector<double> {4.2}){
}


BenzoicAcid::~BenzoicAcid() {
}
