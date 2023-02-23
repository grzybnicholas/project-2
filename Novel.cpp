#include "Novel.hpp"
#include <iostream>
#include <string>
#include <vector>
using namescape std;
/**

  Parameterized constructor.

  param     : The title of the book (a string)

  param     : The author of the book (a string)

  param     : The number of pages in the book (a positive integer)

  param     : The genre of the novel (a string)

  param     : A flag indicating whether the book is in digital form

                with DEFAULT VALUE False (a Boolean)

  param     : A flag indicating whether there is a film adaptation

                for this novel with DEFAULT VALUE False (a Boolean)

*/

Novel::Novel(string title,string author, int pageCount, string genre, bool digital, bool adapt):Book(title, author, pageCount, digital){
  genre_= genre;
  adaptation_ = adapt;
}

/**

  return   : the value of the genre private member

**/

string Novel::getGenre() const{
    return genre_;
}


/**

  param  : a reference to string indicating the genre of the book

  post   : sets genre_ private member to the

              value of the parameter

**/

void Novel::setGenre(const string& genre){
    genre_ = genre;
}
/**

  return   : the vector containing the list of characters for this novel

**/
vector<string> Novel::getCharacterList() const{ 
  return character_list_;
}
/**

  return    : a string of all the characters in the

              character_list_ private member, concatenated

              and separated by a space " " .

              For example: "character1 character2 character3"

**/
string Novel::getCharacterListString() const{
 string chara;
 for(int i = 0; i < character_list_.size();i++){
  chara += character_list_[i] + " ";
 }
 return chara;
}


/**

  param  : a reference to string indicating a character

  post   : inserts the character into the character_list_ vector

**/

void Novel::addCharacter(const string& character){
  character_list_.push_back(character);
}

/**

  return   : the value of the film_adaptation_ private member

**/
bool Novel::hasFilmAdaptation() const{
  return adaptation_;
}

/**

  post   : sets has_film_adaptation_ private member to true

**/
void Novel::setFilmAdaptation() {
  adaptation_ = true;
}
/**

  param    : a reference to floating point number (double) indicating

              the score of the  review

  param    : a reference to string indicating the rating of the review

  return   : creates and returns a review data type with

              score and rating as indicated by the parameters

*/
review Novel::createReview(const double& score, const string& rating){
 review myReview;
 myReview.score_ = score;
 myReview.rating_ = rating;
 return myReview;
}
/**

  param  : a reference to review object

  post   : inserts the review argument into the reviews_ vector

**/
void Novel::addReview(const review& rev){
 reviews_.push_back(rev);
}
/**

  return   : the value of the average rating private member

**/
double Novel::getAverageRating() const{
  return average_rating_;
}


/**

  post   : retrieves all scores from the reviews_ vector and

            computes the average to set value of the average_rating_

            private member

**/
void Novel::calculateAverageRating(){
    double average = 0
    for (review x : reviews_) {
          average += x.score_;
    }
    average /= reviews_.size();
    average_rating_ = average;
}