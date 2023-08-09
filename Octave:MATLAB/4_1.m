x = -pi:0.5:pi;   % Spacing 0.5
y1 = sin(x);

x2 = -pi:0.1:pi;  % Spacing 0.1
y2 = sin(x2);

x3 = -pi:0.01:pi; % Spacing 0.01
y3 = sin(x3);

subplot(3,1,1);    % Create a 3x1 grid of plots, select the 1st plot
plot(x, y1, 'r');
title('Spacing: 0.5');
xlabel('x');
ylabel('sin(x)');

subplot(3,1,2);    % Select the 2nd plot
plot(x2, y2, 'g');
title('Spacing: 0.1');
xlabel('x');
ylabel('sin(x)');

subplot(3,1,3);    % Select the 3rd plot
plot(x3, y3, 'b');
title('Spacing: 0.01');
xlabel('x');
ylabel('sin(x)');

% Use the "hold on" command to keep the previous plots on the figure
hold on;

% Additional plot with a different color to show "hold on" effect
plot(x, cos(x), 'm');
legend('sin(x)', 'cos(x)');
hold off; % Release the "hold on" mode

% Set the overall title for the entire figure
sgtitle('Plot of sin(x) with Different Spacings');
