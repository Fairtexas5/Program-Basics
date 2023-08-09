R1 = input("Enter value of First resistance: ");
R2 = input("Enter value of Second resistance: ");
R3 = input("Enter value of Third resistance: ");
RT = 1/((1/R1)+(1/R2)+(1/R3));
printf("Total resistance is %.2f\n", RT)