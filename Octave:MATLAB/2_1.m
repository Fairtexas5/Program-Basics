% Input three bits
bits = input("Enter three bits (e.g., [1 0 1]): ");

% Check if exactly three bits are provided
if length(bits) ~= 3
    disp("Please provide exactly three bits.");
else
    % Calculate the even-parity bit
    parity_bit = mod(sum(bits), 2);
    
    % Display the input bits and the calculated parity bit
    fprintf("Input bits: %d %d %d\n", bits(1), bits(2), bits(3));
    fprintf("Even-parity bit: %d\n", parity_bit);
end[]
