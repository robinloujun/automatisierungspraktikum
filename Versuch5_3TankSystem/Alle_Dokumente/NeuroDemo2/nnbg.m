function fig = nnbg(n,r)
%NNBG Neural Network Design utility function.

%	NNBG(N,R)
%	  N - Window name (default = figure #).
%           R - Rectangle without tf names (default = none).
%         Returns handle to new figure.
%	
%	NNBG stores the following handles:
%	  H(1) = Axis covering entire figure in pixel coordinates.
%	Where H is the user data of the demo figure.

% Copyright (c) 1992-98 by PWS Publishing Company and The MathWorks, Inc.
% First Version, 8-31-95.
% $Revision: 1.2 $

% NEW FIG

fig = figure('visible','off');

% GET SCREEN SIZE

su = get(0,'units');
set(0,'units','points');
ss = get(0,'ScreenSize');
set(0,'units',su);
left = ss(1);
bottom = ss(2);
width = ss(3);
height = ss(4);

% CENTER FIGURE ON SCREEN

fig_x = 640;
fig_y = 480;
pos = [(width-fig_x)/2+left, (height-fig_y)/2+bottom, fig_x fig_y];


% MAKE SURE TOP LEFT CORNER IS ON SCREEN
% IF SCREEN IS TOO SMALL FOR WINDOW.

if (width < fig_x)
  pos(1) = 5;
end
if (height < fig_y)
  pos(2) = bottom+height-fig_y-40;
end

% CREATE THE FIGURE

if nargin == 0
  n = '';
end
set(fig,...
  'units','points',...
  'position',pos,...
  'color',nnltgray, ...
  'inverthardcopy','off', ...
  'nextplot','add',...
  'name',n,...
  'numbertitle','off');

% Aus der obigen Set-Umgebung herausgenommen von Martin Sackmann
% Ganzer Bildschirm kann ausgefüllt werden
%  'resize','off', ...


% FIGURE AXIS

fig_axis = axes(...
  'visible','off',...
  'units','points', ...
  'position',[0 0 fig_x fig_y],...
  'xlim',[0 fig_x],'ylim',[0 fig_y],...
  'nextplot','add');

% BORDER LINE

plot([0 0 fig_x fig_x 0],[0 fig_y-1 fig_y-1 0 0],'color',nnblack)

% SAVE HANDLES AND LOCK FIGURE

%%%%%% REPLACE THIS
if(0)
set(fig,...
  'userdata',[fig_axis],...
  'nextplot','new')
  %'handlevisibility','callback')
%hidegui
end

%%%%%% WITH THIS
set(fig,...
  'userdata',[fig_axis],...
  'handlevisibility','callback')
%hidegui(fig)
set(fig, 'handlevisibility', 'on')

