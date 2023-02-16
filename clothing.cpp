#include <sstream>
#include <iomanip>
#include "clothing.h"

using namespace std;

Clothing::Clothing(const std::string category, const std::string name, double price, int qty, std::string size, std::string brand) : 
Product(category, name, price, qty)
{
	size_ = size;
	brand_ = brand;

}

std::set<std::string> Clothing::keywords() const{
	std::set<std::string> listOfWords; 
	listOfWords.insert(brand_);
	return listOfWords;

}

std::string Clothing::displayString() const{
		std::string temp = name_+ "\n" +"Size: " + size_ + " Brand: " + brand_ + "\n" + to_string(price_)+" "+to_string(qty_)+ " left.";
}

void Clothing::dump(std::ostream& os) const{
	os << "clothing" << std::endl << name_ << std::endl << setprecision(2) << to_string(price_) << std::endl << to_string(qty_) << std::endl << size_ << std::endl << brand_ << std::endl;
}
