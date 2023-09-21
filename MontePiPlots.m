%First, we have to assign various values 
n_value = [1000, 10000,1000000, 100000000, 200000,2000000];
execution_time = zeros(1, length(n_value));

%Time the execution for various values of n
for i = 1:length(n_value)
    n = n_value(i);
    tic; %This is start time measurement
    [~, ~, ~] = MontePi(n);
    execution_time(i) = toc ;
end
 
%plot resulting execution times against n. 
figure;
subplot(3,1,1);
plot(n_value, execution_time,'mo');
title("Executiion time against n");
xlabel("n (number of points ) ");
ylabel("Execution time");




% compute the approximaations of pi for various values of n
pi_approximations = zeros(1, length(n_value));
absolute_error = zeros(1, length(n_value));

for i = 1:length(n_value)
    n = n_value(i);
    [approximated_value, abs_error, ~] = MontePi(n); %call function
    pi_approximations(i) = approximated_value;
    absolute_error(i) = abs_error;
end

%plot absolute errors against n
subplot(3,1,2)
plot(n_value, absolute_error,'bo-');
title("Executiion time against n");
xlabel("n (number of points ) ");
ylabel("Absolute Error");


% (c), we fixed the number n.
fixed_n = 1000000;
num_inside_circle = 0;

x = zeros(1,fixed_n);
y = zeros(1,fixed_n);

index_inside = false(1,fixed_n);

% we made point of x in a matrix and y in matrix
for i = 1:fixed_n

    x(i) = rand(1);
    y(i) = rand(1); 
    if ((x(i))^2 + (y(i))^2) <= 1
        num_inside_circle = num_inside_circle + 1;
        index_inside(i) = true; %for finding the points which is inside the circle

    end

    
end

approximated_value = 4 * num_inside_circle / fixed_n;

% Random Points inside the circle and outside the circle
subplot(3,1,3);
scatter(x(index_inside), y(index_inside), 1, "b", "filled");


% Random Points inside the circle and outside the circle
hold on;
scatter(x(~index_inside), y(~index_inside), 1, "r", "filled");
plot_title = sprintf("Random points for n = %d \n Approximated pi is %.7f", fixed_n,approximated_value );
title(plot_title);
xlabel("x");
ylabel("y");






