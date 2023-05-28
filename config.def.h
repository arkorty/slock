/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
    /* using everforest colorscheme */
    [INIT]   = "#1E2326",   /* after initialization */
    [INPUT]  = "#7FBBB3",  /* during input */
    [FAILED] = "#E67E80", /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
