// this code is presented as a c++ function
// the function returns a pointer to a dynamically created array. Each element of the array represents a location
// where the pattern matches. -1 indicates that no further matches are found.

int* findAllMatches(string S, string P){	// S is our string, P is our pattern
	
	bool found;				// if a mismatch occurs, then found will be set to 0
	int* arr=new int[S.length()]		// dynamic array, with max possible size. Max size will be 						// S.length() i.e. each index of the string matches the pattern
	int c=0;					// count to keep track which index of arr is available to store info

	for (int i=0; i<S.length(); i++){		// outer loop to move the window along the text/string S
		found=1;			//initially we assume that the pattern will match
for (int j=0; j<P.length(); j++)	// inner loop, to compare characters of our pattern against text
			if (P[j]!=S[i+j]){
				found=0;
				break;
			}
		if (found)
			arr[c++]=i;		// post-increment c
}
arr[c]=-1;				// no further meaningful indices/info in arr
return arr;
}
