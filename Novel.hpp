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
  Novel()=default;
  Novel(string title, string author, int pageCount, string genre, bool digital = false, bool adapt = false);
  string getGenre() const;
  void setGenre(const string& genre);
  vector<string> getCharacterList() const;
  string getCharacterListString() const;
  void addCharacter(const string& character);
  bool hasFilmAdaptation() const;
  void setFilmAdaptation() const;
  review createReview(const double& score, const string& rating);
  double getAverageRating() const;
  void addReview(const review& rev);
  void calculateAverageRating() const;
};
#endif