time = 1:1:19;
speed = [5,10,7,12,8,15,9,14,11,135,10,7,12,8,15,9,14,11,13];

figure;
plot(time,speed,'Marker','o','MarkerSize',8,'MarkerEdgeColor','k','MarkerFaceColor','k','LineWidth',2);

title('internet speed vs time');
xlabel('time(hours)');
ylabel('speed(mbps)');

mean_speed = mean(speed);
std_speed = std(speed);
