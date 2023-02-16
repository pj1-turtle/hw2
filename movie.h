#ifndef MOVIE_H
#define MOVIE_H
#include "product.h"
#include "util.h"


using namespace std;

class Movie : public Product{
	public:
		Movie(const std::string category, const std::string name, double price, int qty, std::string genre_, std::string rating_); 
		std::set<std::string> keywords() const;
		std::string displayString() const;
		void dump(std::ostream& os) const;

	protected:
		std::string genre_;
		std::string rating_;
		//data members
};

#endif