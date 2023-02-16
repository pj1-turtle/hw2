#ifndef BOOK_H
#define BOOK_H

#include "product.h"
#include "util.h"

using namespace std;

class Book : public Product{
	public:
		Book(const std::string category, const std::string name, double price, int qty, std::string author_, std::string ISBN_);
		std::set<std::string> keywords() const;
		std::string displayString() const;
		void dump(std::ostream& os) const;

	protected:
		std::string author_;
		std::string ISBN_;
		//data members
};

#endif