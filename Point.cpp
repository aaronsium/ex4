//
// Created by aharon on 16/01/2020.
//

#include "General.h"

Point::Point(int x1, int y1) {
  this->x = x1;
  this->y = y1;
}
double Point::GetX() const {
  return x;
}
double Point::GetY() const {
  return y;
}