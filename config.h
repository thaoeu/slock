/* user and group to drop privileges to */
static const char *user  = "qj";
static const char *group = "qj";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#192224",     /* after initialization */
	[INPUT] =  "#192224",   /* during input */
	[FAILED] = "magenta",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
