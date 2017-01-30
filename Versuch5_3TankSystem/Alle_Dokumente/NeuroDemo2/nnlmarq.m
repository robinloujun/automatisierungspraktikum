function jac = nnlmarq(p,d)
%NNLMARQ  Marquardt Backpropagation Learning Rule
%           
%         (See PURELIN, LOGSIG, TANSIG)
%
%         jac = NNLMARQ(P,D)
%           P  - RxQ matrix of input vectors.
%           D  - SxQ matrix of sensitivity vectors.
%         Returns:
%           jac - a partial jacobian matrix.

% Copyright (c) 1992-1998 by PWS Publishing Company and The MathWorks, Inc.
% $Revision: 1.3 $


if nargin ~= 2
  error('Wrong number of arguments.');
end

[s,q]=size(d);
[r,q]=size(p);

jac=kron(p',ones(1,s)).*kron(ones(1,r),d');

