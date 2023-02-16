#include <sstream>
#include <iomanip>
#include "book.h"

using namespace std;

Book::Book(const std::string category, const std::string name, double price, int qty, std::string ISBN, std::string author) : 
Product(category, name, price, qty)
{
	author_ = author;
	ISBN_ = ISBN;

}

std::set<std::string> Book::keywords() const{
	std::set<std::string> listOfWords; 
	listOfWords.insert(author_);
	listOfWords.insert(ISBN_);
	return listOfWords;

}

std::string Book::displayString() const{
		std::string temp = name_+ "\n" +"Author: " + author_ + " ISBN: " + ISBN_ + "\n" + to_string(price_)+" "+to_string(qty_)+ " left.";
}

void Book::dump(std::ostream& os) const{
	os << "book" << std::endl << name_ << std::endl << setprecision(2) << to_string(price_) << std::endl << to_string(qty_) << std::endl << ISBN_ << std::endl << author_ << std::endl;

}
