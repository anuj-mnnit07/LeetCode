#! /bin/bash

file_name=27_remove_element
header_extension=hpp

FILE_NAME=${file_name^^}
HEADER_EXTENSION=${header_extension^^}

echo $FILE_NAME

cat <<EOF >> source/include/${file_name}.${header_extension}
#ifdef __${FILE_NAME}_${HEADER_EXTENSION}__
#define __${FILE_NAME}_${HEADER_EXTENSION}__

#endif
EOF

cat <<EOF >> source/src/${file_name}.cc
#include "${file_name}.${header_extension}"
EOF

cat <<EOF >> test/src/${file_name}_test.cc
#include <gtest/gtest.h>

#include "${file_name}.${header_extension}"
TEST(_${file_name}, test_1) {
  EXPECT_EQ(0, 0);
}
EOF
