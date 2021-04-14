/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"mononoki Nerd Font Mono:size=10"
};


static const char bg[] = "#282a36";
static const char col_curline[] = "#44475a";
static const char fg[] = "#f8f8f2";
static const char comment[] = "#6272a4";
static const char cyan[] = "#8be9fd";
static const char green[] = "#50fa7b";
static const char orange[] = "#ffb86c";
static const char pink[] = "#ff79c6";
static const char red[] = "#ff5555";
static const char yellow[] = "#f1fa8c";
static const char purple[] = "#bd93f9";


static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { fg, bg },
	[SchemeSel] = { purple, col_curline},
	[SchemeSelHighlight] = { cyan, bg },
	[SchemeNormHighlight] = { fg, comment },
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
