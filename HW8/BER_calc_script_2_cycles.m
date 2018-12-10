clear;
clc;

N = 256;
delay = 5;
len = 128;

true_data = sign(randn(1,N))>0;
err_position_1 = [13 25 33 45];
det_data_1 = true_data(1:len);
det_data_1(err_position_1) = (det_data_1(err_position_1)==0);
det_data_1 = [zeros(1,delay) det_data_1 zeros(1,N-delay-len)];

errdata_1 = true_data(1:len) ~= det_data_1(delay+1:delay+len);
noe1 = sum(errdata_1);
nod = len;
ber1 = noe1/nod;

err_position_2 = [129 149 150 161 200 201 212 233];
det_data_2 = true_data(1+len:N);
det_data_2(err_position_2-len) = (det_data_2(err_position_2-len)==0);
det_data_2 = [zeros(1,len) det_data_2];

errdata_2 = true_data(1+len:N) ~= det_data_2(1+len:N);
noe2 = sum(errdata_2);
ber2 = noe2/nod;

det_data = [det_data_1(1:128) det_data_2(1+len:N)];