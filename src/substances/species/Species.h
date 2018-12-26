#include <string>
#include <vector>

class Species
{
public:
	Species(std::vector<std::string> names,
			std::vector<double> molarMasses,
			std::vector<double> pKas);
	~Species();


	std::vector<std::string> getName() const;
	std::string getName(int const index) const;

	std::vector<double> getMolarMasses() const;
	double getMolarMass() const;

	std::vector<double> getpKa() const;
	double getpKa(int const index) const;

	void debug() const;

protected:
	std::vector<std::string> m_names;
	std::vector<double> m_molarMasses;
	std::vector<double> m_pKas;	//	Reaction constants for AH + H2O <=> A- + H3O+

};
