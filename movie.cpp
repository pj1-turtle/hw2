#include <sstream>
#include <iomanip>
#include "movie.h"

using namespace std;

Movie::Movie(const std::string category, const std::string name, double price, int qty, std::string genre, std::string rating) : 
Product(category, name, price, qty)
{
	genre_ = genre;
	rating_ = rating;

}

std::set<std::string> Movie::keywords() const{
	std::set<std::string> listOfWords; 
	listOfWords.insert(genre_);
	return listOfWords;

}

std::string Movie::displayString() const{
		std::string temp = name_+ "\n" +"Genre: " + genre_ + " Rating: " + rating_ + "\n" + to_string(price_)+" "+to_string(qty_)+ " left.";
}

void Movie::dump(std::ostream& os) const{
	os << "movie" << std::endl << name_ << std::endl << setprecision(2) << to_string(price_) << std::endl << to_string(qty_) << std::endl << genre_ << std::endl << rating_ << std::endl;
}
