
% first put base 
n = input("Enter a first base: "); % base integer

% check if 2 <= n <= 10.. input is valid 
if n <2 || n>10 
   error("There is an error!!") %만약에 에러이면 어떻게

end


% number in base n                  
number = input("Enter integer: ","s"); % number in base-n

% checdd
m = input("Enter integer");


%baseStr = dec2base(number,n);
%base2dec

% new_number = dec2base(str2double(base2dec(number,n)),m);

%new_number = dec2base(base2dec(number,n),m);

%first make number(base n) --> base 10
n_to_decimal = 0;
for i = 1 : length(number)
    n_to_decimal = n_to_decimal + str2num(number(i)) * (n^(length(number)-i));
end

%disp(n_to_decimal)

% 10진법을 m진법으로 바꾸기 -- output이 integer이어야되는지 물어보기

m_based_num = '';

while n_to_decimal > 0
    remainder = mod(n_to_decimal,m);
    m_based_num = append(num2str(remainder), m_based_num);
    n_to_decimal = floor(n_to_decimal/m);


end

disp(m_based_num)







