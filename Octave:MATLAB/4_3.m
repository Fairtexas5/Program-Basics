x = linspace(-2*pi, 2*pi, 1000);
y = 5 * cos(x.^2 + 1);

plot(x, y, 'b');
title('Plot of 5 * cos(x^2 + 1)');
xlabel('x');
ylabel('y');
grid on;