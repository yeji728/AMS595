
% first put base 
n = input("Enter a first base: "); % base integer

% check if 2 <= n <= 10.. input is valid 
if n <2 || n>10 
   error("There is an error!! n should be between 2 and 10.") 

end


% number in base n                  
number = input("Enter integer: ","s"); % number in base-n

% check if m is valid
m = input("Enter integer:");


% base n to decimal(base 10)
n_to_decimal = 0;
for i = 1 : length(number)
    n_to_decimal = n_to_decimal + str2num(number(i)) * (n^(length(number)-i));
end



% decimal to base m
m_based_num = '';

while n_to_decimal > 0
    remainder = mod(n_to_decimal,m);
    m_based_num = append(num2str(remainder), m_based_num);
    n_to_decimal = floor(n_to_decimal/m);


end


%display the result
fprintf("Your number in base %d is: %s \n", m,m_based_num)







