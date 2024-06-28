#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_401727(int a1)
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

  v1 = qword_608290;
  if ( a1 )
  {
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = gettext("Usage: %s [OPTION]... [FILE]\nBase64 encode or decode FILE, or standard input, to standard output.\n\n");
    printf(v3, v1);
    v4 = stdout;
    v5 = gettext(
           "  -d, --decode          decode data\n"
           "  -i, --ignore-garbage  when decoding, ignore non-alphabet characters\n"
           "  -w, --wrap=COLS       wrap encoded lines after COLS character (default 76).\n"
           "                          Use 0 to disable line wrapping\n"
           "\n");
    fputs_unlocked(v5, v4);
    v6 = stdout;
    v7 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext("\nWith no FILE, or when FILE is -, read standard input.\n");
    fputs_unlocked(v11, v10);
    v12 = stdout;
    v13 = gettext(
            "\n"
            "The data are encoded as described for the base64 alphabet in RFC 3548.\n"
            "When decoding, the input may contain newlines in addition to the bytes of\n"
            "the formal base64 alphabet.  Use --ignore-garbage to attempt to recover\n"
            "from any other non-alphabet bytes in the encoded stream.\n");
    fputs_unlocked(v13, v12);
    sub_40161D();
  }
  exit(a1);
}
