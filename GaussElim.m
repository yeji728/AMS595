function x = GaussElim(A,b)

    % Combine the A and b to create argumented matrix 
    new_matrix = [A, b]; 

    nrow = size(A,1); %number of row
    ncol = size(A,2); %number of column

    %first we have to check if it is square matrix
    if nrow ~= ncol
        error("A should be a square matrix, so there is an error")
    end

    %Then we have to check if A and b are compatible
    if nrow ~= length(b)
        error("dimensions are different!!") 
    end
    
    %check if determinant is 0 to check if matrix is singular
    if det(A) == 0
        error("Determinant is 0, so we cannot find x vector")
    end



    %Gaussian elimation steps

    for i = 1: (nrow)

    %This is for making pivot. (if (i,i) is 0, we should exchange the rows)
        if new_matrix(i,i) == 0 %check A(i,i)is 0
            swap_row = new_matrix(i,:);
            
            %This is for swapping the row
            for j = i+1 : nrow 
                if new_matrix(j,i) ~= 0 %If this is 0, we find the other rows to exchange the rows
                    %This is for exchanging the rows
                    new_matrix(i,:) = new_matrix(j,:); 
                    new_matrix(j,:) = swap_row;
                    break;
                end
            end
        end

       

        % This is for making pivot 1 for convenience 
        if new_matrix(i, i) ~= 1
            new_matrix(i, :) = new_matrix(i, :) / new_matrix(i, i);
        end
        
        %This is for eliminating non-zero elements below the pivot
        for j = i+1 : nrow
     
            if new_matrix(j,i) ~= 0
                coefficient = new_matrix(j,i)/new_matrix(i,i);
                new_matrix(j,:) = -coefficient * new_matrix(i,:) + new_matrix(j,:);
     
     
     
            end
    
        end
    end
   

    % This is back substituion to find x. 
   
    x = zeros(1,nrow);

    for i = nrow: -1 : 1 % first we have to find the last element of vector. from n to 1
        x(i) = new_matrix(i, ncol+1);
        
        
        for j = i+1 : nrow
            x(i) = x(i) - new_matrix(i,j)* x(j);
        end
    end




end
