function y = nncallbk(demo,command)
%NNCALLBK Neural Network Design utility function.

% NNCALLBK(DEMO,COMMAND)
%   DEMO - Name of demo.
%   COMMAND - Command.
% Returns string of form: DEMO('COMMAND').

% Copyright (c) 1992-1998 by PWS Publishing Company and The MathWorks, Inc.
% First Version, 8-31-95.
% $Revision: 1.7 $

y = sprintf('%s(''%s'')',demo,command);
