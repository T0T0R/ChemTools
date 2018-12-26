#include <iostream>
#include <vector>
#include <string>

#include "Species.h"


Species::Species(std::vector<std::string> names,
				 std::vector<double> molarMasses,
				 std::vector<double> pKas):
	m_names(names), m_molarMasses(molarMasses), m_pKas(pKas){
}


Species::~Species() {
}


std::vector<std::string> Species::getName() const{	return m_names;}
std::string Species::getName(int const index) const{ return m_names[index];}

std::vector<double> Species::getMolarMasses() const{	return m_molarMasses;}
double Species::getMolarMass() const { return m_molarMasses[0]; }

std::vector<double> Species::getpKa() const{	return m_pKas;}
double Species::getpKa(int const index) const{	return m_pKas[index];}

void Species::debug() const{
	std::cout<<"Species:"<<"\t\t";
	for (unsigned int i(0); i<this->m_names.size(); i++){
		std::cout<<this->m_names[i]<<"\t";
	}
	std::cout<<std::endl;

	std::cout<<"Mol. Masses:"<<"\t\t";
	for (unsigned int i(0); i<this->m_molarMasses.size(); i++) {
		std::cout<<this->m_molarMasses[i]<<"\t";
	}
	std::cout<<std::endl;

	std::cout<<"-log Ka:"<<"\t\t";
	for (unsigned int i(0); i<this->m_pKas.size(); i++) {
		std::cout<<this->m_pKas[i]<<"\t";
	}
	std::cout<<std::endl;
}