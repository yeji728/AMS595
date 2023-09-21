function [approximated_value, abs_error, relative_error] = MontePi(n)
    
    
    num_inside_circle = 0; % number of the point inside the circle
    total_points = n;% total number of points

    for i = 1: n

        x = rand(1);
        y = rand(1);
        
        if (x^2 + y^2) <= 1
            num_inside_circle = num_inside_circle + 1;
        end
    end

    %This is for approximated value for pi
    approximated_value = 4 * num_inside_circle / total_points;

    abs_error = abs(pi-approximated_value);

    relative_error = abs_error / pi;


  












end

