// Expression	What it represents	Type when used	Output
// arr	First row's address	int (*)[4]	Address
// arr[0]	First element's address	int*	Same address
// arr[0][0]	Actual first integer	int	Integer value

// Important: arr and arr[0] print the same address,
//  but their pointer types are different. 
//  This difference becomes very important when you do pointer arithmetic.