#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_401B0F(int a1)
{
  __int64 v1; // rbx
  char *v2; // rax
  __int64 v3; // r13
  __int64 v4; // r12
  __int64 v5; // rbx
  char *v6; // rax
  FILE *v7; // rbx
  char *v8; // rax
  FILE *v9; // rbx
  char *v10; // rax
  FILE *v11; // rbx
  char *v12; // rax
  FILE *v13; // rbx
  char *v14; // rax
  FILE *v15; // rbx
  char *v16; // rax
  FILE *v17; // rbx
  char *v18; // rax
  FILE *v19; // rbx
  char *v20; // rax
  FILE *v21; // rbx
  char *v22; // rax
  FILE *v23; // rbx
  char *v24; // rax
  FILE *v25; // rbx
  char *v26; // rax
  FILE *v27; // rbx
  char *v28; // rax
  FILE *v29; // rbx
  char *v30; // rax
  FILE *v31; // rbx
  char *v32; // rax
  FILE *v33; // rbx
  char *v34; // rax
  FILE *v35; // rbx
  char *v36; // rax
  FILE *v37; // rbx
  char *v38; // rax
  FILE *v39; // rbx
  char *v40; // rax
  FILE *v41; // rbx
  char *v42; // rax
  FILE *v43; // rbx
  char *v44; // rax
  FILE *v45; // rbx
  char *v46; // rax
  FILE *v47; // rbx
  char *v48; // rax
  FILE *v49; // rbx
  char *v50; // rax
  FILE *v51; // rbx
  char *v52; // rax
  FILE *v53; // rbx
  char *v54; // rax
  FILE *v55; // rbx
  char *v56; // rax
  FILE *v57; // rbx
  char *v58; // rax
  FILE *v59; // rbx
  char *v60; // rax
  FILE *v61; // rbx
  char *v62; // rax
  FILE *v63; // rbx
  char *v64; // rax
  FILE *v65; // rbx
  char *v66; // rax
  FILE *v67; // rbx
  char *v68; // rax
  FILE *v69; // rbx
  char *v70; // rax

  if ( a1 )
  {
    v1 = qword_6132E8;
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = qword_6132E8;
    v4 = qword_6132E8;
    v5 = qword_6132E8;
    v6 = gettext(
           "Usage: %s [-F DEVICE | --file=DEVICE] [SETTING]...\n"
           "  or:  %s [-F DEVICE | --file=DEVICE] [-a|--all]\n"
           "  or:  %s [-F DEVICE | --file=DEVICE] [-g|--save]\n");
    printf(v6, v5, v4, v3);
    v7 = stdout;
    v8 = gettext(
           "Print or change terminal characteristics.\n"
           "\n"
           "  -a, --all          print all current settings in human-readable form\n"
           "  -g, --save         print all current settings in a stty-readable form\n"
           "  -F, --file=DEVICE  open and use the specified DEVICE instead of stdin\n");
    fputs_unlocked(v8, v7);
    v9 = stdout;
    v10 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v10, v9);
    v11 = stdout;
    v12 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v12, v11);
    v13 = stdout;
    v14 = gettext(
            "\n"
            "Optional - before SETTING indicates negation.  An * marks non-POSIX\n"
            "settings.  The underlying system defines which settings are available.\n");
    fputs_unlocked(v14, v13);
    v15 = stdout;
    v16 = gettext(
            "\n"
            "Special characters:\n"
            " * dsusp CHAR    CHAR will send a terminal stop signal once input flushed\n"
            "   eof CHAR      CHAR will send an end of file (terminate the input)\n"
            "   eol CHAR      CHAR will end the line\n");
    fputs_unlocked(v16, v15);
    v17 = stdout;
    v18 = gettext(
            " * eol2 CHAR     alternate CHAR for ending the line\n"
            "   erase CHAR    CHAR will erase the last character typed\n"
            "   intr CHAR     CHAR will send an interrupt signal\n"
            "   kill CHAR     CHAR will erase the current line\n");
    fputs_unlocked(v18, v17);
    v19 = stdout;
    v20 = gettext(
            " * lnext CHAR    CHAR will enter the next character quoted\n"
            "   quit CHAR     CHAR will send a quit signal\n"
            " * rprnt CHAR    CHAR will redraw the current line\n"
            "   start CHAR    CHAR will restart the output after stopping it\n");
    fputs_unlocked(v20, v19);
    v21 = stdout;
    v22 = gettext(
            "   stop CHAR     CHAR will stop the output\n"
            "   susp CHAR     CHAR will send a terminal stop signal\n"
            " * swtch CHAR    CHAR will switch to a different shell layer\n"
            " * werase CHAR   CHAR will erase the last word typed\n");
    fputs_unlocked(v22, v21);
    v23 = stdout;
    v24 = gettext(
            "\n"
            "Special settings:\n"
            "   N             set the input and output speeds to N bauds\n"
            " * cols N        tell the kernel that the terminal has N columns\n"
            " * columns N     same as cols N\n");
    fputs_unlocked(v24, v23);
    v25 = stdout;
    v26 = gettext(
            "   ispeed N      set the input speed to N\n"
            " * line N        use line discipline N\n"
            "   min N         with -icanon, set N characters minimum for a completed read\n"
            "   ospeed N      set the output speed to N\n");
    fputs_unlocked(v26, v25);
    v27 = stdout;
    v28 = gettext(
            " * rows N        tell the kernel that the terminal has N rows\n"
            " * size          print the number of rows and columns according to the kernel\n"
            "   speed         print the terminal speed\n"
            "   time N        with -icanon, set read timeout of N tenths of a second\n");
    fputs_unlocked(v28, v27);
    v29 = stdout;
    v30 = gettext(
            "\n"
            "Control settings:\n"
            "   [-]clocal     disable modem control signals\n"
            "   [-]cread      allow input to be received\n"
            " * [-]crtscts    enable RTS/CTS handshaking\n"
            "   csN           set character size to N bits, N in [5..8]\n");
    fputs_unlocked(v30, v29);
    v31 = stdout;
    v32 = gettext(
            "   [-]cstopb     use two stop bits per character (one with `-')\n"
            "   [-]hup        send a hangup signal when the last process closes the tty\n"
            "   [-]hupcl      same as [-]hup\n"
            "   [-]parenb     generate parity bit in output and expect parity bit in input\n"
            "   [-]parodd     set odd parity (even with `-')\n");
    fputs_unlocked(v32, v31);
    v33 = stdout;
    v34 = gettext(
            "\n"
            "Input settings:\n"
            "   [-]brkint     breaks cause an interrupt signal\n"
            "   [-]icrnl      translate carriage return to newline\n"
            "   [-]ignbrk     ignore break characters\n"
            "   [-]igncr      ignore carriage return\n");
    fputs_unlocked(v34, v33);
    v35 = stdout;
    v36 = gettext(
            "   [-]ignpar     ignore characters with parity errors\n"
            " * [-]imaxbel    beep and do not flush a full input buffer on a character\n"
            "   [-]inlcr      translate newline to carriage return\n"
            "   [-]inpck      enable input parity checking\n"
            "   [-]istrip     clear high (8th) bit of input characters\n");
    fputs_unlocked(v36, v35);
    v37 = stdout;
    v38 = gettext(" * [-]iutf8      assume input characters are UTF-8 encoded\n");
    fputs_unlocked(v38, v37);
    v39 = stdout;
    v40 = gettext(
            " * [-]iuclc      translate uppercase characters to lowercase\n"
            " * [-]ixany      let any character restart output, not only start character\n"
            "   [-]ixoff      enable sending of start/stop characters\n"
            "   [-]ixon       enable XON/XOFF flow control\n"
            "   [-]parmrk     mark parity errors (with a 255-0-character sequence)\n"
            "   [-]tandem     same as [-]ixoff\n");
    fputs_unlocked(v40, v39);
    v41 = stdout;
    v42 = gettext(
            "\n"
            "Output settings:\n"
            " * bsN           backspace delay style, N in [0..1]\n"
            " * crN           carriage return delay style, N in [0..3]\n"
            " * ffN           form feed delay style, N in [0..1]\n"
            " * nlN           newline delay style, N in [0..1]\n");
    fputs_unlocked(v42, v41);
    v43 = stdout;
    v44 = gettext(
            " * [-]ocrnl      translate carriage return to newline\n"
            " * [-]ofdel      use delete characters for fill instead of null characters\n"
            " * [-]ofill      use fill (padding) characters instead of timing for delays\n"
            " * [-]olcuc      translate lowercase characters to uppercase\n"
            " * [-]onlcr      translate newline to carriage return-newline\n"
            " * [-]onlret     newline performs a carriage return\n");
    fputs_unlocked(v44, v43);
    v45 = stdout;
    v46 = gettext(
            " * [-]onocr      do not print carriage returns in the first column\n"
            "   [-]opost      postprocess output\n"
            " * tabN          horizontal tab delay style, N in [0..3]\n"
            " * tabs          same as tab0\n"
            " * -tabs         same as tab3\n"
            " * vtN           vertical tab delay style, N in [0..1]\n");
    fputs_unlocked(v46, v45);
    v47 = stdout;
    v48 = gettext(
            "\n"
            "Local settings:\n"
            "   [-]crterase   echo erase characters as backspace-space-backspace\n"
            " * crtkill       kill all line by obeying the echoprt and echoe settings\n"
            " * -crtkill      kill all line by obeying the echoctl and echok settings\n");
    fputs_unlocked(v48, v47);
    v49 = stdout;
    v50 = gettext(
            " * [-]ctlecho    echo control characters in hat notation (`^c')\n"
            "   [-]echo       echo input characters\n"
            " * [-]echoctl    same as [-]ctlecho\n"
            "   [-]echoe      same as [-]crterase\n"
            "   [-]echok      echo a newline after a kill character\n");
    fputs_unlocked(v50, v49);
    v51 = stdout;
    v52 = gettext(
            " * [-]echoke     same as [-]crtkill\n"
            "   [-]echonl     echo newline even if not echoing other characters\n"
            " * [-]echoprt    echo erased characters backward, between `\\' and '/'\n"
            "   [-]icanon     enable erase, kill, werase, and rprnt special characters\n"
            "   [-]iexten     enable non-POSIX special characters\n");
    fputs_unlocked(v52, v51);
    v53 = stdout;
    v54 = gettext(
            "   [-]isig       enable interrupt, quit, and suspend special characters\n"
            "   [-]noflsh     disable flushing after interrupt and quit special characters\n"
            " * [-]prterase   same as [-]echoprt\n"
            " * [-]tostop     stop background jobs that try to write to the terminal\n"
            " * [-]xcase      with icanon, escape with `\\' for uppercase characters\n");
    fputs_unlocked(v54, v53);
    v55 = stdout;
    v56 = gettext(
            "\n"
            "Combination settings:\n"
            " * [-]LCASE      same as [-]lcase\n"
            "   cbreak        same as -icanon\n"
            "   -cbreak       same as icanon\n");
    fputs_unlocked(v56, v55);
    v57 = stdout;
    v58 = gettext(
            "   cooked        same as brkint ignpar istrip icrnl ixon opost isig\n"
            "                 icanon, eof and eol characters to their default values\n"
            "   -cooked       same as raw\n"
            "   crt           same as echoe echoctl echoke\n");
    fputs_unlocked(v58, v57);
    v59 = stdout;
    v60 = gettext(
            "   dec           same as echoe echoctl echoke -ixany intr ^c erase 0177\n"
            "                 kill ^u\n"
            " * [-]decctlq    same as [-]ixany\n"
            "   ek            erase and kill characters to their default values\n"
            "   evenp         same as parenb -parodd cs7\n");
    fputs_unlocked(v60, v59);
    v61 = stdout;
    v62 = gettext(
            "   -evenp        same as -parenb cs8\n"
            " * [-]lcase      same as xcase iuclc olcuc\n"
            "   litout        same as -parenb -istrip -opost cs8\n"
            "   -litout       same as parenb istrip opost cs7\n"
            "   nl            same as -icrnl -onlcr\n"
            "   -nl           same as icrnl -inlcr -igncr onlcr -ocrnl -onlret\n");
    fputs_unlocked(v62, v61);
    v63 = stdout;
    v64 = gettext(
            "   oddp          same as parenb parodd cs7\n"
            "   -oddp         same as -parenb cs8\n"
            "   [-]parity     same as [-]evenp\n"
            "   pass8         same as -parenb -istrip cs8\n"
            "   -pass8        same as parenb istrip cs7\n");
    fputs_unlocked(v64, v63);
    v65 = stdout;
    v66 = gettext(
            "   raw           same as -ignbrk -brkint -ignpar -parmrk -inpck -istrip\n"
            "                 -inlcr -igncr -icrnl  -ixon  -ixoff  -iuclc  -ixany\n"
            "                 -imaxbel -opost -isig -icanon -xcase min 1 time 0\n"
            "   -raw          same as cooked\n");
    fputs_unlocked(v66, v65);
    v67 = stdout;
    v68 = gettext(
            "   sane          same as cread -ignbrk brkint -inlcr -igncr icrnl -iutf8\n"
            "                 -ixoff -iuclc -ixany imaxbel opost -olcuc -ocrnl onlcr\n"
            "                 -onocr -onlret -ofill -ofdel nl0 cr0 tab0 bs0 vt0 ff0\n"
            "                 isig icanon iexten echo echoe echok -echonl -noflsh\n"
            "                 -xcase -tostop -echoprt echoctl echoke, all special\n"
            "                 characters to their default values\n");
    fputs_unlocked(v68, v67);
    v69 = stdout;
    v70 = gettext(
            "\n"
            "Handle the tty line connected to standard input.  Without arguments,\n"
            "prints baud rate, line discipline, and deviations from stty sane.  In\n"
            "settings, CHAR is taken literally, or coded as in ^c, 0x37, 0177 or\n"
            "127; special values ^- or undef used to disable special characters.\n");
    fputs_unlocked(v70, v69);
    sub_4018BC();
  }
  exit(a1);
}
