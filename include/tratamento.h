#include <stdexcept>
using std::invalid_argument;

class NumeroNegativo : public invalid_argument {
	public:
	NumeroNegativo() : invalid_argument("argumento invalido: Nao existe areaperimetrovolume negativo") {}
};