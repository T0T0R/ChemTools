#include "Paracetamol.h"



Paracetamol::Paracetamol():
	Species(std::vector<std::string> {"C8H9NO2", "C8H8NO2 -"},
			std::vector<double> {151.16, 150.15},
			std::vector<double> {9.38}){
}


Paracetamol::~Paracetamol() {
}
