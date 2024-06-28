#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_401A7A(int a1)
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

  if ( a1 )
  {
    v1 = qword_612418;
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = qword_612418;
    v4 = qword_612418;
    v5 = qword_612418;
    v6 = gettext(
           "Usage: %s [OPTION]... [FILE]...\n"
           "  or:  %s [-abcdfilosx]... [FILE] [[+]OFFSET[.][b]]\n"
           "  or:  %s --traditional [OPTION]... [FILE] [[+]OFFSET[.][b] [+][LABEL][.][b]]\n");
    printf(v6, v5, v4, v3);
    v7 = stdout;
    v8 = gettext(
           "\n"
           "Write an unambiguous representation, octal bytes by default,\n"
           "of FILE to standard output.  With more than one FILE argument,\n"
           "concatenate them in the listed order to form the input.\n"
           "With no FILE, or when FILE is -, read standard input.\n"
           "\n");
    fputs_unlocked(v8, v7);
    v9 = stdout;
    v10 = gettext("All arguments to long options are mandatory for short options.\n");
    fputs_unlocked(v10, v9);
    v11 = stdout;
    v12 = gettext(
            "  -A, --address-radix=RADIX   decide how file offsets are printed\n"
            "  -j, --skip-bytes=BYTES      skip BYTES input bytes first\n");
    fputs_unlocked(v12, v11);
    v13 = stdout;
    v14 = gettext(
            "  -N, --read-bytes=BYTES      limit dump to BYTES input bytes\n"
            "  -S, --strings[=BYTES]       output strings of at least BYTES graphic chars\n"
            "  -t, --format=TYPE           select output format or formats\n"
            "  -v, --output-duplicates     do not use * to mark line suppression\n"
            "  -w, --width[=BYTES]         output BYTES bytes per output line\n"
            "      --traditional           accept arguments in traditional form\n");
    fputs_unlocked(v14, v13);
    v15 = stdout;
    v16 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v16, v15);
    v17 = stdout;
    v18 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v18, v17);
    v19 = stdout;
    v20 = gettext(
            "\n"
            "Traditional format specifications may be intermixed; they accumulate:\n"
            "  -a   same as -t a,  select named characters, ignoring high-order bit\n"
            "  -b   same as -t o1, select octal bytes\n"
            "  -c   same as -t c,  select ASCII characters or backslash escapes\n"
            "  -d   same as -t u2, select unsigned decimal 2-byte units\n");
    fputs_unlocked(v20, v19);
    v21 = stdout;
    v22 = gettext(
            "  -f   same as -t fF, select floats\n"
            "  -i   same as -t dI, select decimal ints\n"
            "  -l   same as -t dL, select decimal longs\n"
            "  -o   same as -t o2, select octal 2-byte units\n"
            "  -s   same as -t d2, select decimal 2-byte units\n"
            "  -x   same as -t x2, select hexadecimal 2-byte units\n");
    fputs_unlocked(v22, v21);
    v23 = stdout;
    v24 = gettext(
            "\n"
            "If first and second call formats both apply, the second format is assumed\n"
            "if the last operand begins with + or (if there are 2 operands) a digit.\n"
            "An OFFSET operand means -j OFFSET.  LABEL is the pseudo-address\n"
            "at first byte printed, incremented when dump is progressing.\n"
            "For OFFSET and LABEL, a 0x or 0X prefix indicates hexadecimal;\n"
            "suffixes may be . for octal and b for multiply by 512.\n");
    fputs_unlocked(v24, v23);
    v25 = stdout;
    v26 = gettext(
            "\n"
            "TYPE is made up of one or more of these specifications:\n"
            "\n"
            "  a          named character, ignoring high-order bit\n"
            "  c          ASCII character or backslash escape\n");
    fputs_unlocked(v26, v25);
    v27 = stdout;
    v28 = gettext(
            "  d[SIZE]    signed decimal, SIZE bytes per integer\n"
            "  f[SIZE]    floating point, SIZE bytes per integer\n"
            "  o[SIZE]    octal, SIZE bytes per integer\n"
            "  u[SIZE]    unsigned decimal, SIZE bytes per integer\n"
            "  x[SIZE]    hexadecimal, SIZE bytes per integer\n");
    fputs_unlocked(v28, v27);
    v29 = stdout;
    v30 = gettext(
            "\n"
            "SIZE is a number.  For TYPE in doux, SIZE may also be C for\n"
            "sizeof(char), S for sizeof(short), I for sizeof(int) or L for\n"
            "sizeof(long).  If TYPE is f, SIZE may also be F for sizeof(float), D\n"
            "for sizeof(double) or L for sizeof(long double).\n");
    fputs_unlocked(v30, v29);
    v31 = stdout;
    v32 = gettext(
            "\n"
            "RADIX is d for decimal, o for octal, x for hexadecimal or n for none.\n"
            "BYTES is hexadecimal with 0x or 0X prefix, and may have a multiplier suffix:\n"
            "b 512, kB 1000, K 1024, MB 1000*1000, M 1024*1024,\n"
            "GB 1000*1000*1000, G 1024*1024*1024, and so on for T, P, E, Z, Y.\n"
            "Adding a z suffix to any type displays printable characters at the end of each\n"
            "output line.\n");
    fputs_unlocked(v32, v31);
    v33 = stdout;
    v34 = gettext(
            "Option --string without a number implies 3; option --width without a number\n"
            "implies 32.  By default, od uses -A o -t oS -w16.\n");
    fputs_unlocked(v34, v33);
    sub_401970();
  }
  exit(a1);
}
