#! /bin/bash


file_name=""
name_space=""
header_extension=hpp

while getopts ":f:n:h:" opt; do
  case $opt in
    f) file_name="$OPTARG"
    ;;
    n) name_space="$OPTARG"
    ;;
    h) header_extension="$OPTARG"
    ;;
    \?) echo "Invalid option -$OPTARG" >&2
    exit 1
    ;;
  esac

  case $OPTARG in
    -*) echo "Option $opt needs valid arg -f for filename, -n for namespace and -h for header externsion hpp or h"
    exit 1
    ;;
  esac
done

if [ "${file_name}" == "" ];then
  echo "Error: file_name is empty, add argument using -f file_name"
  exit 1
fi

if [ "${name_space}" == "" ];then
  echo "Error: namespace is empty, add argument using -n namespace"
  exit 1
fi

if [ "${header_extension}" != "hpp" ] && [ "${header_extension}" != "h" ]; then
  echo "Error: only header extension possible is h or hpp"
  exit 1
fi

echo "file_name: $file_name"
echo "namespace: $name_space"
echo "header_extension: $header_extension"

FILE_NAME=${file_name^^}
HEADER_EXTENSION=${header_extension^^}

echo $FILE_NAME

cat <<EOF >> source/include/${file_name}.${header_extension}
#ifndef __${FILE_NAME}_${HEADER_EXTENSION}__
#define __${FILE_NAME}_${HEADER_EXTENSION}__

#include <vector>

using namespace std;
namespace __${name_space} {



} // namespace __${name_space}
#endif // __${FILE_NAME}_${HEADER_EXTENSION}__
EOF

cat <<EOF >> source/src/${file_name}.cc
#include "${file_name}.${header_extension}"
EOF

cat <<EOF >> test/src/${file_name}_test.cc
#include <gtest/gtest.h>

#include "${file_name}.${header_extension}"

using namespace __${name_space};

TEST(_${file_name}, test_1) {
  EXPECT_EQ(0, 0);
}
EOF
