function x = GaussElim(A,b)

    % This is used for gaussian elimination
    new_matrix = [A, b]; 


    nrow = size(A,1); %number of row
    ncol = size(A,2); %number of column

    %first we have to check if it is square matrix
    if nrow ~= ncol
        error("A should be a square matrix, so there is an error")
    end

    %Then we have to check if 
    if nrow ~= length(b)
        error("dimensions are different!!") 
    end
    
    if det(A) == 0
        error("Determinant is 0, so we cannot find x vector")
    end

    for i = 1: (nrow)

    %This is for making pivot. (if (i,i) is 0, we should exchange the rows)
        if new_matrix(i,i) == 0
            swap_row = new_matrix(i,:);
        
            for j = i+1 : nrow
                if new_matrix(j,i) ~= 0
                    new_matrix(i,:) = new_matrix(j,:);
                    new_matrix(j,:) = swap_row;
                    break;
                end
            end
        end

        % for j = i+1: nrow
        % 
        % 
        %     % if new_matrix(i,i) == 0
        %     %     swap_row = new_matrix(i,:);
        %     % 
        %     %     new_matrix(i,:) = new_matrix(j,:);
        %     %     new_matrix(j,:) = swap_row;
        %     % end
        % end


    
        if new_matrix(i, i) ~= 1
            new_matrix(i, :) = new_matrix(i, :) / new_matrix(i, i);
        end
        
        for j = i+1 : nrow
     
            if new_matrix(j,i) ~= 0
                coefficient = new_matrix(j,i)/new_matrix(i,i);
                new_matrix(j,:) = -coefficient * new_matrix(i,:) + new_matrix(j,:);
     
     
     
            end
    
        end
    end
    % if new_matrix(nrow, nrow) ~= 1
    %     new_matrix(nrow, :) = new_matrix(nrow, :) / new_matrix(nrow, nrow);
    % end




    % back substitution




   
    x = zeros(1,nrow);

    for i = nrow: -1 : 1
        x(i) = new_matrix(i, ncol+1);
        
        
        for j = i+1 : nrow
            x(i) = x(i) - new_matrix(i,j)* x(j);
        end
    end




end
