#!/bin/bash
python3 generate_number.py

cp new.txt l1.txt
a=($(wc l1.txt))
echo $a
for (( c=1; c<=$a; c++ ))
do
echo "Welcome $c times"
sed -n '1p' l1.txt >m1.txt
value=`cat m1.txt`
echo "name \"OW\" and same residue as within $value  of group \"Protein\"">choic.txt
wait
./RUN_SELECT
wait
sed -i '1,23d' size.xvg
wait
g++ -std=c++11 select_ps_timesteps_value.cpp
./a.out
wait
rm *#*
sed -i '1d' l1.txt
done
rm *#*
sort -u savecpp.txt | rev | uniq -f1 | rev | sort -n>alldistances.txt
rm savecpp.txt
rm l1.txt m1.txt size.xvg
xmgrace alldistances.txt

