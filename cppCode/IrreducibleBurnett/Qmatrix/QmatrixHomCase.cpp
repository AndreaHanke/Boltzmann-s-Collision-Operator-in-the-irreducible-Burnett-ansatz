/*	Calculate the map from STF^n1 x STF^n2 to STF^n 
	Remember the restrictions to n1,n2 and n
	This function only takes pointers of the input (a and b) and the result (r)
 a has degree n1, b has degree n2, r has degree n.
 It expects that always n2 >= n1
*/
 
void calcQ(int caseNumber, double* a, double* b, double* r, double Sfactor){
 	 switch(caseNumber){
	 case 1: // n=0  n1=0  n2=0
 		 r[0]+= Sfactor*(a[0]*b[0]);
	   break;
     }
}
