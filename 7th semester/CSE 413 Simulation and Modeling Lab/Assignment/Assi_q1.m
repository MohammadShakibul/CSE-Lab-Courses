x = -10:0.1:10;

f1 = 2*x + 3;
f2 = x.^2-5*x +2;
%the plot
figure;
plot(x, f1, 'Color', 'r', 'LineStyle', '-', 'LineWidth', 2);
hold on;
plot(x, f2, 'Color', 'r', 'LineStyle', '-', 'LineWidth', 2);

title('plot of linear and quadratic functions');
xlabel('x');
ylabel('f(x)');

legend('f1(x) = 2x + 3', 'f2(x) = x^2 - 5x +2','Location', 'best');

plot(x_intersect, y_intersect, 'Marker', 'o', 'MarkerSize', 8, 'MarkerEdgeColor', 'k', 'MarkerFaceColor', 'k');
fprintf('The point where both functions intersect is (%.2f, %.2f)\n', x_intersect, y_intersect);


