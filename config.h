//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
/*Icon*/  /*Command*/       /*Interval*/    /*Signal*/
	{"", "bar-memory",              180,        3},
	{"", "bar-player",              0,          6},
	{"", "bar-volume",  	        0,          5},
	{"", "bar-weather 1",	        1800,       2},
	{"", "date +'%d %b %y, %H:%M'",	60,         1},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " ~~ ";
