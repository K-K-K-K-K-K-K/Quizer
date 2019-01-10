set -eu

wget https://github.com/kcct-dk/Quizer/archive/master.zip
mv master.zip Quizer.zip
unzip Quizer.zip

rm -rf ../QAData

mv -f Quizer-master/* ../
rm Quizer.zip

