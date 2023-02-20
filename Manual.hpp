#ifndef MANUAL_HPP_
#define MANUAL_HPP_

#include "Book.hpp"
#include <iostream>
#include <string>
using namespace std;

class Manual: public Book{
  private:
    string url_;
    string device_;
    bool visual_aid_;
    bool website_;
  public:
   Manual();
   Manual(string title,string author, int pageCount,string device,string url,bool digital = false, bool visualAid = false);
   void setDevice(const string& device);
   string getDevice();
   bool setWebsite(const string& website);
   string getWebsite();
   void setVisualAid(const bool& visual);
   bool hasVisualAid();
   bool hasWebsite();
};
#endif