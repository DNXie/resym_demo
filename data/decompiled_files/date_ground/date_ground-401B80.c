#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_401B80(int a1)
{
  __int64 v1; // rbx
  char *v2; // rax
  __int64 v3; // r12
  __int64 v4; // rbx
  char *v5; // rax
  FILE *v6; // rbx
  char *v7; // rax
  FILE *v8; // rbx
  char *v9; // rax
  FILE *v10; // rbx
  char *v11; // rax
  FILE *v12; // rbx
  char *v13; // rax
  FILE *v14; // rbx
  char *v15; // rax
  FILE *v16; // rbx
  char *v17; // rax
  FILE *v18; // rbx
  char *v19; // rax
  FILE *v20; // rbx
  char *v21; // rax
  FILE *v22; // rbx
  char *v23; // rax
  FILE *v24; // rbx
  char *v25; // rax
  FILE *v26; // rbx
  char *v27; // rax
  FILE *v28; // rbx
  char *v29; // rax
  FILE *v30; // rbx
  char *v31; // rax
  FILE *v32; // rbx
  char *v33; // rax
  FILE *v34; // rbx
  char *v35; // rax
  FILE *v36; // rbx
  char *v37; // rax
  FILE *v38; // rbx
  char *v39; // rax
  FILE *v40; // rbx
  char *v41; // rax
  FILE *v42; // rbx
  char *v43; // rax

  if ( a1 )
  {
    v1 = qword_611310;
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = qword_611310;
    v4 = qword_611310;
    v5 = gettext("Usage: %s [OPTION]... [+FORMAT]\n  or:  %s [-u|--utc|--universal] [MMDDhhmm[[CC]YY][.ss]]\n");
    printf(v5, v4, v3);
    v6 = stdout;
    v7 = gettext(
           "Display the current time in the given FORMAT, or set the system date.\n"
           "\n"
           "  -d, --date=STRING         display time described by STRING, not `now'\n"
           "  -f, --file=DATEFILE       like --date once for each line of DATEFILE\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext(
           "  -r, --reference=FILE      display the last modification time of FILE\n"
           "  -R, --rfc-2822            output date and time in RFC 2822 format.\n"
           "                            Example: Mon, 07 Aug 2006 12:34:56 -0600\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext(
            "      --rfc-3339=TIMESPEC   output date and time in RFC 3339 format.\n"
            "                            TIMESPEC=`date', `seconds', or `ns' for\n"
            "                            date and time to the indicated precision.\n"
            "                            Date and time components are separated by\n"
            "                            a single space: 2006-08-07 12:34:56-06:00\n"
            "  -s, --set=STRING          set time described by STRING\n"
            "  -u, --utc, --universal    print or set Coordinated Universal Time\n");
    fputs_unlocked(v11, v10);
    v12 = stdout;
    v13 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v13, v12);
    v14 = stdout;
    v15 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v15, v14);
    v16 = stdout;
    v17 = gettext(
            "\n"
            "FORMAT controls the output.  Interpreted sequences are:\n"
            "\n"
            "  %%   a literal %\n"
            "  %a   locale's abbreviated weekday name (e.g., Sun)\n");
    fputs_unlocked(v17, v16);
    v18 = stdout;
    v19 = gettext(
            "  %A   locale's full weekday name (e.g., Sunday)\n"
            "  %b   locale's abbreviated month name (e.g., Jan)\n"
            "  %B   locale's full month name (e.g., January)\n"
            "  %c   locale's date and time (e.g., Thu Mar  3 23:05:25 2005)\n");
    fputs_unlocked(v19, v18);
    v20 = stdout;
    v21 = gettext(
            "  %C   century; like %Y, except omit last two digits (e.g., 20)\n"
            "  %d   day of month (e.g., 01)\n"
            "  %D   date; same as %m/%d/%y\n"
            "  %e   day of month, space padded; same as %_d\n");
    fputs_unlocked(v21, v20);
    v22 = stdout;
    v23 = gettext(
            "  %F   full date; same as %Y-%m-%d\n"
            "  %g   last two digits of year of ISO week number (see %G)\n"
            "  %G   year of ISO week number (see %V); normally useful only with %V\n");
    fputs_unlocked(v23, v22);
    v24 = stdout;
    v25 = gettext("  %h   same as %b\n  %H   hour (00..23)\n  %I   hour (01..12)\n  %j   day of year (001..366)\n");
    fputs_unlocked(v25, v24);
    v26 = stdout;
    v27 = gettext(
            "  %k   hour, space padded ( 0..23); same as %_H\n"
            "  %l   hour, space padded ( 1..12); same as %_I\n"
            "  %m   month (01..12)\n"
            "  %M   minute (00..59)\n");
    fputs_unlocked(v27, v26);
    v28 = stdout;
    v29 = gettext(
            "  %n   a newline\n"
            "  %N   nanoseconds (000000000..999999999)\n"
            "  %p   locale's equivalent of either AM or PM; blank if not known\n"
            "  %P   like %p, but lower case\n"
            "  %r   locale's 12-hour clock time (e.g., 11:11:04 PM)\n"
            "  %R   24-hour hour and minute; same as %H:%M\n"
            "  %s   seconds since 1970-01-01 00:00:00 UTC\n");
    fputs_unlocked(v29, v28);
    v30 = stdout;
    v31 = gettext(
            "  %S   second (00..60)\n"
            "  %t   a tab\n"
            "  %T   time; same as %H:%M:%S\n"
            "  %u   day of week (1..7); 1 is Monday\n");
    fputs_unlocked(v31, v30);
    v32 = stdout;
    v33 = gettext(
            "  %U   week number of year, with Sunday as first day of week (00..53)\n"
            "  %V   ISO week number, with Monday as first day of week (01..53)\n"
            "  %w   day of week (0..6); 0 is Sunday\n"
            "  %W   week number of year, with Monday as first day of week (00..53)\n");
    fputs_unlocked(v33, v32);
    v34 = stdout;
    v35 = gettext(
            "  %x   locale's date representation (e.g., 12/31/99)\n"
            "  %X   locale's time representation (e.g., 23:13:48)\n"
            "  %y   last two digits of year (00..99)\n"
            "  %Y   year\n");
    fputs_unlocked(v35, v34);
    v36 = stdout;
    v37 = gettext(
            "  %z   +hhmm numeric time zone (e.g., -0400)\n"
            "  %:z  +hh:mm numeric time zone (e.g., -04:00)\n"
            "  %::z  +hh:mm:ss numeric time zone (e.g., -04:00:00)\n"
            "  %:::z  numeric time zone with : to necessary precision (e.g., -04, +05:30)\n"
            "  %Z   alphabetic time zone abbreviation (e.g., EDT)\n"
            "\n"
            "By default, date pads numeric fields with zeroes.\n");
    fputs_unlocked(v37, v36);
    v38 = stdout;
    v39 = gettext(
            "The following optional flags may follow `%':\n"
            "\n"
            "  -  (hyphen) do not pad the field\n"
            "  _  (underscore) pad with spaces\n"
            "  0  (zero) pad with zeros\n"
            "  ^  use upper case if possible\n"
            "  #  use opposite case if possible\n");
    fputs_unlocked(v39, v38);
    v40 = stdout;
    v41 = gettext(
            "\n"
            "After any flags comes an optional field width, as a decimal number;\n"
            "then an optional modifier, which is either\n"
            "E to use the locale's alternate representations if available, or\n"
            "O to use the locale's alternate numeric symbols if available.\n");
    fputs_unlocked(v41, v40);
    v42 = stdout;
    v43 = gettext(
            "\n"
            "Examples:\n"
            "Convert seconds since the epoch (1970-01-01 UTC) to a date\n"
            "  $ date --date='@2147483647'\n"
            "\n"
            "Show the time on the west coast of the US (use tzselect(1) to find TZ)\n"
            "  $ TZ='America/Los_Angeles' date\n"
            "\n"
            "Show the local time for 9AM next Friday on the west coast of the US\n"
            "  $ date --date='TZ=\"America/Los_Angeles\" 09:00 next Fri'\n");
    fputs_unlocked(v43, v42);
    sub_401A2D();
  }
  exit(a1);
}
