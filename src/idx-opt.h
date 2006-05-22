
int bisect_left_d(double *a, double x, int hi, int offset);
int bisect_left_i(int *a, int x, int hi, int offset);
int bisect_right_d(double *a, double x, int hi, int offset);
int bisect_right_i(int *a, int x, int hi, int offset);

int get_sorted_indices(int nrows,
		       long long *rbufR2, int *rbufst, int *rbufln);
int convert_addr64(int nrows,
		   int nelem, long long *rbufA, int *rbufR, int *rbufln);

