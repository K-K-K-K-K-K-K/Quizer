set -eu

gcc QAFileReader.c QAUnit.h -o Test
./Test > out.txt

