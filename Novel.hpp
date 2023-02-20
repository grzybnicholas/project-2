#ifndef NOVEL_HPP_
#define NOVEL_HPP_

#include "Book.hpp"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Novel: public Book{
 private:
  string genre_;
  struct review;
  vector<string> character_list_;
  vector<review> reviews_;
  double average_rating_;
  bool adaptation_;
 public:
  Novel();
  Novel(string book, string author, int pageCount, string genre, bool digital = false, bool adapt = false);
  string getGenre();
  string setGenre(const string& genre);
  vector<string> getCharacterList();
  vector<review> getCharacterListString();
  void addCharacter(const string& character);
  bool hasFilmAdaptation();
  void setFilmAdaptation();
  double getAverageRating();

};
#endif