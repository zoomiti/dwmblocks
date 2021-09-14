#define PATH(script) "$HOME/desktop/dwmblocks/scripts/"script


//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{ "", PATH("sb-cpu"),           1, 4 },
	{ "", PATH("sb-memory"),        1, 3 },
	{ "", PATH("sb-ip"),          360, 6 },
	{ "", PATH("sb-pacpackages"), 360, 5 },
	{ "", PATH("sb-volume"),        0, 2 },
	{ "", PATH("sb-clock"),         1, 1 },
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
