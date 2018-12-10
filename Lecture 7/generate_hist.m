figure(1);
hist(Sin, 10);
figure(2);
hist(Sout, 10);
figure(3);
hist(S1, 10);
figure(4);
hist(S2, 10);
figure(5);
hist(S3, 10);
figure(6);
hist(S4, 10);
figure(7);
hist(S5, 10);
figure(8);
hist(S6, 10);

SQNR = 10.*log((mean(Sout.^2))./(mean(Sout-double(Sout_fixed)).^2));