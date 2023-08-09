A = [1 1 -2; 2 1 0; 1 1 -1];
B = [3; 7; 4];
C = A\B;
printf("\nx = %d", C(1,1));
printf("\ny = %d", C(2,1));
printf("\nz = %d", C(3,1));