#ifndef TEXTBOOK_HPP_
#define TEXTBOOK_HPP_

#include "Book.hpp"
#include <iostream>
#include <string>
using namespace std;
enum grade_level {NONE,  ELEMENTARY, JUNIOR_HIGH, HIGH_SCHOOL, COLLEGE};

class Textbook: public Book{
 private:
  string subject_;
  bool review_;
  grade_level grade_;
 public:
    Textbook();
    Textbook(string title, string author, int pageCount, string subject, bool digital = false, grade_level grade = NONE, bool review = false);
    void setSubject(const string& sub);
    string getSubject() const;
    void setGradelevel(const grade_level& grade);
    string getGradelevel() const;
    void setReviewQuestions();
    bool checkReviewQuestions() const;

};

#endif