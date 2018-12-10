clear;
clc;

x_in = 1;
y_in = 0;
z_in = -60*pi/180;
stage = 12;

% Phase Table Generator
pht = atan(2.^(0:-1:-(stage-1)));

% Scale Constant Value
scale = prod(cos(pht));

% Main Program
x = x_in;
y = y_in;
z = z_in;
sign_val = sign(z);
buf = [z sign_val x y];

for nn=0:stage-1
    xnew = x - sign_val*2^(-nn)*y;
    ynew = y + sign_val*2^(-nn)*x;
    znew = z - sign_val*pht(nn+1);
    sign_val = sign(znew);
    buf = [buf; znew sign_val xnew ynew];
    x = xnew;
    y = ynew;
    z = znew;
end

x_cordic = x*scale;
y_cordic = y*scale;

xtrue = x_in*cos(z_in) - y_in*sin(z_in);
ytrue = x_in*sin(z_in) + y_in*cos(z_in);