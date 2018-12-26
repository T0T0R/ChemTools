#include "Water.h"



Water::Water():
	Species(std::vector<std::string> {"H3O +", "H2O", "HO -"}, 
			std::vector<double> {19.02, 18.01, 17.01},
			std::vector<double> {0.0, 13.995} ){
}


Water::~Water() {
}
