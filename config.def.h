/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#000000",     /* after initialization */
	[INPUT] =  "#073642",   /* during input */
	[FAILED] = "#DC322F",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
