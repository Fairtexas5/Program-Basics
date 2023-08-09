q = [1 5 6 8 3 2 4 5 9 10 1];
x = [3 5 7 8 3 1 2 4 11 5 9];

% a) Elements of q that are greater than 4
greater_than_4 = q(q > 4);

% b) Elements of q that are equal to those in x
equal_to_x = q(ismember(q, x));

% c) Elements of x that are less than or equal to 7
less_than_equal_to_7 = x(x <= 7);

% Display the results
fprintf("a) Elements of q greater than 4: %s\n", mat2str(greater_than_4));
fprintf("b) Elements of q equal to those in x: %s\n", mat2str(equal_to_x));
fprintf("c) Elements of x less than or equal to 7: %s\n", mat2str(less_than_equal_to_7));
