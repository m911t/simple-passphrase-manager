# simple-passphrase-manager
A simple cli passphrase manager 

# Features

* Multi-language word selection
* Randomized word separator

# File structure
* For dictionary files: 
	- Filename: language.txt
	- Content: 
	Columns of words, each column having all the words that start with a letter, each column being ordered alphabetically, same with the rows, without caps.
	Example:
	abacus barber car
	angle bread creed
	
* For the the passphrase file itself:
	Service | Username | Passphrase | Notes
