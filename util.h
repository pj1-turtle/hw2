#ifndef UTIL_H
#define UTIL_H

#include <string>
#include <iostream>
#include <set>


/** Complete the setIntersection and setUnion functions below
 *  in this header file (since they are templates).
 *  Both functions should run in time O(n*log(n)) and not O(n^2)
 */
template <typename T>
std::set<T> setIntersection(std::set<T>& s1, std::set<T>& s2)
{
	std::set<T> intersection; 
	typename std::set<T>::iterator itr;
	for (itr = s1.begin(); itr != s1.end(); ++itr) {
			if(s2.find(*itr) != s2.end()){
			intersection.insert(*itr);
		}
	//find is logN time??? how what thats like cheating
	}
	return intersection;
}
template <typename T>
std::set<T> setUnion(std::set<T>& s1, std::set<T>& s2)
{
	typename std::set<T>::iterator itr;
	typename std::set<T>::iterator itr2;
	std::set<T> intersection;
	for (itr = s1.begin(); itr != s1.end(); ++itr) {
		intersection.insert(*itr);
	}
	for (itr2 = s2.begin(); itr2 != s2.end(); ++itr2) {
		intersection.insert(*itr2);
	}
	return intersection;

}

/***********************************************/
/* Prototypes of functions defined in util.cpp */
/***********************************************/

std::string convToLower(std::string src);

std::set<std::string> parseStringToWords(std::string line);

// Used from http://stackoverflow.com/questions/216823/whats-the-best-way-to-trim-stdstring
// Removes any leading whitespace
std::string &ltrim(std::string &s) ;

// Removes any trailing whitespace
std::string &rtrim(std::string &s) ;

// Removes leading and trailing whitespace
std::string &trim(std::string &s) ;
#endif
