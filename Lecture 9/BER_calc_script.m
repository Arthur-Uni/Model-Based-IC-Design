clear;
clc;

N = 256;
delay = 5;
len = 128;

true_data = [sign(randn(1,len))>0 zeros(1,N-len)];
err_position = [13 25 33 45];
det_data = true_data(1:len);
det_data(err_position) = (det_data(err_position)==0);
det_data = [zeros(1,delay) det_data zeros(1,N-delay-len)];

errdata = true_data(1:len) ~= det_data(delay+1:delay+len);
noe = sum(errdata);
nod = len;
ber = noe/nod;