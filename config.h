/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=14"
};

static const unsigned int baralpha = 0xd0U;
static const unsigned int borderalpha = OPAQUE;

static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#222222" },
	[SchemeSel] = { "#eeeeee", "#005577" },
	[SchemeSelHighlight] = { "#ffc978", "#005577" },
	[SchemeNormHighlight] = { "#ffc978", "#222222" },
	[SchemeOut] = { "#000000", "#00ffff" },
};

static const unsigned int alphas[][3] = {
    /*      fg        bg        border  */
    [SchemeNorm] = { OPAQUE, baralpha, borderalpha },
    [SchemeSel] = { OPAQUE, baralpha, borderalpha },
    [SchemeSelHighlight] = { OPAQUE, baralpha, borderalpha },
    [SchemeNormHighlight] = { OPAQUE, baralpha, borderalpha },
    [SchemeOut] = { OPAQUE, baralpha, borderalpha }
};

/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines = 0;
static unsigned int columns = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 2;
