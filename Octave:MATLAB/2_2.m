clc;
binary = input("Enter a three-bit binary number (e.g., [1 0 1]): ");

% Convert binary to Gray code
gray = xor(binary, [0 binary(1:end-1)]);
    
% Display the original binary and the equivalent Gray code
printf("Binary number: %d %d %d\n", binary(1), binary(2), binary(3));
printf("Gray code: %d %d %d\n", gray(1), gray(2), gray(3));
