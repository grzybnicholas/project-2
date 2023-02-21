#include "Novel.hpp"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct review {

    double score_;

    std::string rating_;

};
/**

  Parameterized constructor.

  @param     : The title of the book (a string)

  @param     : The author of the book (a string)

  @param     : The number of pages in the book (a positive integer)

  @param     : The genre of the novel (a string)

  @param     : A flag indicating whether the book is in digital form

                with DEFAULT VALUE False (a Boolean)

  @param     : A flag indicating whether there is a film adaptation

                for this novel with DEFAULT VALUE False (a Boolean)

*/

Novel::Novel(string title, string author, int pageCount, string genre, bool digital = false, bool adapt = false):Book(title, author, pageCount, digital){
  genre_= genre;
}

/**

  @return   : the value of the genre private member

**/

string Novel::getGenre(){
    return genre_;
}


/**

  @param  : a reference to string indicating the genre of the book

  @post   : sets genre_ private member to the

              value of the parameter

**/

void Novel::setGenre(const string& genre){
    genre_ = genre;
}
/**

  @return   : the vector containing the list of characters for this novel

**/
vector<string> Novel::getCharacterList(){
  return character_list_;
}

/**

  @return   : the value of the film_adaptation_ private member

**/
bool Novel::hasFilmAdaptation(){
  return adaptation_;
}

/**

  @post   : sets has_film_adaptation_ private member to true

**/
void Novel::setFilmAdaptation(){
  adaptation_ = true;
}


/**

  @return   : the value of the average rating private member

**/
double Novel::getAverageRating(){
  return average_rating_;
}