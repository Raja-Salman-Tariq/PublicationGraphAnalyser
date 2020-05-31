	int* prefixFun(string S){
		
bool match=1;				// if mismatch occurs, we’ll adjust this helping variable
int* arr=new int[S.length()]		// dynamic array, with max possible size. Max size will be 						// S.length() i.e. each index of the string will indicate next start
int l;					// length of su/prefix
for (int i=0; i<S.length(); i++){
	
	arr[i]=0;
for (l=i-1; l>=0; l--){
		
		if (! (S.substr(0,l)).compare(S.substr(i-l,l)) ){	// if prefix==suffix of length l, store
			arr[i]=l+1;				// this length in array
			break;
}	
}
}
return arr;
}
