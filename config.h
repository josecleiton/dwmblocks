// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
    {"", "music", 0, 11},
    {"", "cat /tmp/recordingicon 2>/dev/null", 0, 9},
    {"", "pacpackages", 0, 8},
    /* {"", "news", 0, 6}, */
    /* {"",	"crypto",	0,	13}, */
    /* {"", "price bat \"Basic Attention Token\" 🦁", 0, 20}, */
    {"", "price btc Bitcoin 💰", 24 * 60 * 60, 21},
    {"", "price usd Dolar 💲", 4 * 60 * 60, 22},
    {"", "torrent", 20, 7},
    /* {"",	"moonphase",	18000,	17}, */
    {"", "weather", 18000, 5},
    {"", "mailbox", 180, 12},
    /* {"",	"nettraf",	1,	16}, */
    {"", "memory", 10, 14},
    {"", "cpu", 10, 18},
    {"", "volume", 0, 10},
    {"", "disk /home", 0, 15},
    {"", "clock", 30, 1},
    {"", "battery", 5, 3},
    {"", "internet", 5, 4},
    /* {"", "help-icon", 0, 15}, */
};

// sets delimeter between status commands. NULL character ('\0') means no
// delimeter.
static char delim = ' ';

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd
// ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid
// dwmblocks & }
