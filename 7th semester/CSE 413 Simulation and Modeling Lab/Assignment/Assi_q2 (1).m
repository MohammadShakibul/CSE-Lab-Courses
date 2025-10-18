languages = {'python', 'c', 'java', 'javascript', 'others'};
popularity = [40,20,15,15,10];

figure;
bar(popularity,'FaceColor', 'red');

set(gca, 'XTick', 1:length(languages));
set(gca, 'XTickLabel', languages);
xtickangle(45); 

title('popularity of programming languages');
xlabel('language');
ylabel('popularity(%)');

