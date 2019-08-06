# GDP-MovieLens-Preprocessing
Knowledge Graph Preprocessing from the MovieLens movie rating data, intersected with semantic information pulled from DBPedia.

## Usage
 1. Download the [MovieLens 20M dataset](https://grouplens.org/datasets/movielens/20m/) (or any of their smaller datasets)
 2. Place the MovieLens `movies.csv` and `ratings.csv` files in the `/in` folder
 3. Open `GenerateMoviesDataset.ipynb` and run the whole notebook
 4. The `/out` folder should now contain `movies.csv` and `IdxToEid.txt`
 5. *(optional)* Compile `EndProc.cpp` to an executable named `EndProc`
 6. Run `MakeRatingsCsv.sh`
 
## Contents
```
═╦═ EndProc.cpp 
 ╠═ EndProc (This is the compiled EndProc.cpp)  
 ╠═╦═ /in  
 ║ ╚═ (Place movies.csv and ratings.csv files here)
 ╠═ MakeRatingsCsv.sh
 ╠═══ /out
 ╠═══ /pickles
```
## Outputs
For the purposes of this section, **train_case represents a *number***, and **camelCase represents a *string***.
 1. `entities.txt` - Indices of Non-Movie Entities, formatted as lines of `<entityUri> <entity_index>`
 2. `IdxToEid.txt` - Mapping of MovieLens ID to Knowledge Graph Entity ID, formatted as lines of `<ML_ID> <KG_ID>`
 3. `movies_re.csv` - MovieLens `movies.csv`, filtered and with KG indices
 4. `moviesIdx.txt` - Indices of Movie Entities, formatted as lines of `<movieUri> <entity_index>`
 5. `/perRel` - Contains triples grouped by relation, with each type of relation kept in a single file  
 For file `<relationName>.txt`, each line `<entity_1_idx>, <entity_2_idx>` represents `<entity_1_idx> <relationName> <entity_2_idx>`  
 6. `/perType` - Contains entities grouped by type. Each line is formatted as `<entityUri> <entity_id>`
 7. `ratings_re.csv` - MovieLens `ratings.csv`, filtered and with KG indices
 8. `triples_idx.txt` - Contains triples formatted as `<entity_1_uri> <relation_index> <entity_2_uri>`
 9. `types.txt`- contains lines formatted as `<entityUri> <entityType>`
 10. `relations.txt` - contains lines formatted as `<relationName> <relation_idx>`

## Notes
This preprocessing is nondeterministic, due to Python's unstable `for x in dict` behavior.  
Be sure to not use files from different preprocessing runs.  
  
Also, `EndProc.cpp` is implemented in C++ due to the slowness of Python in processing large files.

## Author
 - Benedict Tobias H. Wahyudi - tobi8800@gmail.com
## Contributors
 - Jessin Donnyson - jessinra@gmail.com
 - Aldo Bima Syahputra - syahbimaa@gmail.com
 - Michael Julio Oey - michael.julio@gdplabs.id
 - Fallon Candra - fallon.candra@gdplabs.id
