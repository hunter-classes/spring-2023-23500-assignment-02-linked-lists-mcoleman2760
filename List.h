#pragma once
#include <iostream>
#include "Node.h"

class List{
 private:
  Node *head;
 public:
  List();
  void insert(std::string data);
  void insert(int loc, std::string data); //0 indexed
  int length();

  std::string toString(); // for testing purposes
    void remove(int loc);
    ~List();
    bool contains(std::string item);


    };
