	int findIndexOfPatt(string s, string patt){
		
		int spuriousHitCount=0;				// spurious hit count

		int querry=(stoi(patt))%11;				// hash of pattern
		bool yes;						// yes-pattern found
		for (int i=0; i<s.length()-1 ;i++){
			if ((stoi(s.substr(i,2))%11)==querry){
				yes=1;					// initially assuming that patt is found
for (int j=0; j<patt.length(); j++ && yes)
	if (patt[j]!=s[i+j]){
		spuriousHitCount++;
		yes=0;			// mismatch, incorrect index/spurious hit
}
			}
			if (yes)
				return i;				// return index where patter found
}
return -1; 						// represents pattern not found
}
