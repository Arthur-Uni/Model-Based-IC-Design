clear;
clc;

d = 16;

data = rand(16,1);

res = zeros(16,1);

for m=4:4:d
    for i=0:3
        res(i+1,1) = data(m/4+i*4);
        l = m/4+i*4
    end
end

