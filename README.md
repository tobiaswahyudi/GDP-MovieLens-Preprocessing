# GDP-MovieLens-Preprocessing
Knowledge Graph Preprocessing from the MovieLens movie rating data, intersected with semantic information pulled from DBPedia.

## Usage
 1. Place the MovieLens `movies.csv` and `ratings.csv` files in the `/in` folder.
 2. Open `GenerateMoviesDataset.ipynb` and run the whole notebook.
 3. The `/out` folder should now contain `movies.csv` and `IdxToEid.txt`
 4. *(optional)* Compile `EndProc.cpp` to an executable named `EndProc`
 5. Run `MakeRatingsCsv.sh`
 
## Contents
```
═╦═ EndProc.cpp 
 ╠═ EndProc  
 ╠═══ /in  
 ╠═ MakeRatingsCsv.sh
 ╠═══ /out
 ╠═══ /pickles
```
## Outputs
 1. `entities.txt`
 2. `IdxToEid.txt`
 3. `movies_re.csv`
 4. `moviesIdx.txt`
 5. `/perRel`
 6. `/perType`
 7. `ratings_re.csv`
 8. `triples_idx.txt`
 9. `types.txt`
