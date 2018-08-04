//
// Created by Nidhal DOGGA on 04/08/2018.
//

#ifndef MLKIT_DATA_SE_H
#define MLKIT_DATA_SE_H

#include <iostream>
#include <vector>
#include <string>
#include "macros.h"
#include "cell.h"
#include "label_vector.h"

MLKIT_NAMESPACE_DEFINE
MLKIT_DATA_NAMESPACE_DEFINE

class data_set
{

private:

  std::vector<mlkit::data::label_vector> __vectors;

public:

  data_set() = default;
  
  size_t ncols();
  size_t nrows();

  mlkit::data::cell at(size_t row, size_t col);
  void set(const mlkit::data::cell &cell, size_t row, size_t col);

  void add_col(const std::string &label);
  
  std::vector<mlkit::data::cell>& operator[] (const std::string &label);

};

MLKIT_DATA_NAMESPACE_CLOSE
MLKIT_NAMESPACE_CLOSE

#endif //MLKIT_DATA_SE_H
