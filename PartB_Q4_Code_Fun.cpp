	int * findPatt(string Patt, string Text){
		string A=Patt+’~’+Text;
		int * arr=new int[A.length()];
		int l=0;								// length

		int PP=0;							// to traverse P via PP
		for (int PT=Patt.length(); PT<A.length(); PT++){ 		// traverse T via PT
			
			if (PT==Patt.length()){
				Arr[PT]=0;					// initialization
			}
			if (A[PP]==A[PT]){
				l++;
				PP++;
			}
			else{
				Arr[PT-l]=l;
				PP=0;
}
}
return arr;
}
