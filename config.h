/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 0;                      /* -b  option; if 0, dmenu appears at bottom     */
static const unsigned int alpha = 0x99;     /* Amount of opacity. 0xff is opaque             */
/* -fn option overrides fonts[0]; default X11 font or font set */
static char font[] = "NotoSansMono-Black.ttf:size=12";
static const char *fonts[] = {
    font,
    "NotoColorEmoji:pixelsize=8:antialias=true:autohint=true",
};

 static int centered = 1;                    /* -c option; centers dmenu on screen */
 static int min_width = 800;                    /* minimum width when centered */
 static const float menu_height_ratio = 2.05f;  /* This is the ratio used in the original calculation */

    /*     fg         bg       */

static char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static char normfgcolor[] = "#bbbbbb";
static char normbgcolor[] = "#222222";
static char selfgcolor[]  = "#eeeeee";
static char selbgcolor[]  = "#005577";
static char *colors[SchemeLast][2] = {
    /*     fg         bg       */
   [SchemeNorm] = { normfgcolor, normbgcolor },
   [SchemeSel]  = { selfgcolor,  selbgcolor  },
   [SchemeOut]  = { "#000000",   "#00ffff" },
};

static const unsigned int alphas[SchemeLast][2] = {
    [SchemeNorm] = { OPAQUE, alpha },
    [SchemeSel] = { OPAQUE, alpha },
    [SchemeOut] = { OPAQUE, alpha },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
    { "font",        STRING,  &font },
    { "color0",      STRING,  &normbgcolor },  // Background for normal items
    { "color4",      STRING,  &normfgcolor },  // Foreground for normal items
    { "color0",      STRING,  &selfgcolor },   // Foreground for selected item
    { "color4",      STRING,  &selbgcolor },   // Background for selected item
    { "prompt",      STRING,  &prompt },
};
