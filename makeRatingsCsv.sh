mkdir temp
touch temp/ofile.in
cat out/IdxToEID.txt in/ratings.csv > temp/ofile.in
./endProc < temp/ofile.in > out/ratings_re.csv
rm temp/ofile.in
rmdir temp
