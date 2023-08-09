x = -pi:0.5:pi;   % Spacing 0.5
y1 = sin(x);

x2 = -pi:0.1:pi;  % Spacing 0.1
y2 = sin(x2);

x3 = -pi:0.01:pi; % Spacing 0.01
y3 = sin(x3);

subplot(3,1,1);
plot(x, y1, 'r');
title('Plot of sin(x) with Different Spacings');
xlabel('x');
ylabel('sin(x)');

subplot(3,1,2);
plot(x2, y2, 'g');
xlabel('x');
ylabel('sin(x)');

subplot(3,1,3);
plot(x3, y3, 'b');
xlabel('x');
ylabel('sin(x)');

hold on;
plot(x, cos(x), 'm');
legend('sin(x)', 'cos(x)');
hold off;

sgtitle('Comparison of sin(x) and cos(x)');
