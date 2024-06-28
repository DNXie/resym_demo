#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_401737(int a1)
{
  __int64 v1; // rbx
  char *v2; // rax
  char *v3; // rax
  FILE *v4; // rbx
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

  v1 = qword_60D590;
  if ( a1 )
  {
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = gettext("Usage: %s [OPTION]... SET1 [SET2]\n");
    printf(v3, v1);
    v4 = stdout;
    v5 = gettext(
           "Translate, squeeze, and/or delete characters from standard input,\n"
           "writing to standard output.\n"
           "\n"
           "  -c, -C, --complement    use the complement of SET1\n"
           "  -d, --delete            delete characters in SET1, do not translate\n"
           "  -s, --squeeze-repeats   replace each input sequence of a repeated character\n"
           "                            that is listed in SET1 with a single occurrence\n"
           "                            of that character\n"
           "  -t, --truncate-set1     first truncate SET1 to length of SET2\n");
    fputs_unlocked(v5, v4);
    v6 = stdout;
    v7 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext(
            "\n"
            "SETs are specified as strings of characters.  Most represent themselves.\n"
            "Interpreted sequences are:\n"
            "\n"
            "  \\NNN            character with octal value NNN (1 to 3 octal digits)\n"
            "  \\\\              backslash\n"
            "  \\a              audible BEL\n"
            "  \\b              backspace\n"
            "  \\f              form feed\n"
            "  \\n              new line\n"
            "  \\r              return\n"
            "  \\t              horizontal tab\n");
    fputs_unlocked(v11, v10);
    v12 = stdout;
    v13 = gettext(
            "  \\v              vertical tab\n"
            "  CHAR1-CHAR2     all characters from CHAR1 to CHAR2 in ascending order\n"
            "  [CHAR*]         in SET2, copies of CHAR until length of SET1\n"
            "  [CHAR*REPEAT]   REPEAT copies of CHAR, REPEAT octal if starting with 0\n"
            "  [:alnum:]       all letters and digits\n"
            "  [:alpha:]       all letters\n"
            "  [:blank:]       all horizontal whitespace\n"
            "  [:cntrl:]       all control characters\n"
            "  [:digit:]       all digits\n");
    fputs_unlocked(v13, v12);
    v14 = stdout;
    v15 = gettext(
            "  [:graph:]       all printable characters, not including space\n"
            "  [:lower:]       all lower case letters\n"
            "  [:print:]       all printable characters, including space\n"
            "  [:punct:]       all punctuation characters\n"
            "  [:space:]       all horizontal or vertical whitespace\n"
            "  [:upper:]       all upper case letters\n"
            "  [:xdigit:]      all hexadecimal digits\n"
            "  [=CHAR=]        all characters which are equivalent to CHAR\n");
    fputs_unlocked(v15, v14);
    v16 = stdout;
    v17 = gettext(
            "\n"
            "Translation occurs if -d is not given and both SET1 and SET2 appear.\n"
            "-t may be used only when translating.  SET2 is extended to length of\n"
            "SET1 by repeating its last character as necessary.  Excess characters\n"
            "of SET2 are ignored.  Only [:lower:] and [:upper:] are guaranteed to\n"
            "expand in ascending order; used in SET2 while translating, they may\n"
            "only be used in pairs to specify case conversion.  -s uses SET1 if not\n"
            "translating nor deleting; else squeezing uses SET2 and occurs after\n"
            "translation or deletion.\n");
    fputs_unlocked(v17, v16);
    sub_4015DC();
  }
  exit(a1);
}
