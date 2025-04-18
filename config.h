//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/ /*Command*/		/*Interval*/	/*Signal*/
	{"", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g", 60, 0},
	{"", "sb-spotify",      0,    11},
	{"", "bar-weather 1",	1800, 2},
	{"", "date '+%I:%M%p'",	60,   1},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " :: ";
