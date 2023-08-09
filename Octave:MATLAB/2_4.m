x = [10 3; 9 15];
y = [10 0; 9 3];
z = [-1 0; -3 2];

% a) v = x > y
v = x > y;

% b) w = z >= y
w = z >= y;

% c) u = ~z & y
u = ~z & y;

% d) t = x & y < z
t = x & y < z;

disp("Output:");
disp("a) v = x > y");
disp(v);
disp("b) w = z >= y");
disp(w);
disp("c) u = ~z & y");
disp(u);
disp("d) t = x & y < z");
disp(t);
