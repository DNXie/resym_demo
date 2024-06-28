#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_404E33(int a1)
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

  if ( a1 )
  {
    v1 = qword_610B10;
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = qword_610B10;
    v4 = qword_610B10;
    v5 = gettext("Usage: %s [OPTION]... [INPUT]...   (without -G)\n  or:  %s -G [OPTION]... [INPUT [OUTPUT]]\n");
    printf(v5, v4, v3);
    v6 = stdout;
    v7 = gettext("Output a permuted index, including context, of the words in the input files.\n\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext("Mandatory arguments to long options are mandatory for short options too.\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext(
            "  -A, --auto-reference           output automatically generated references\n"
            "  -G, --traditional              behave more like System V `ptx'\n"
            "  -F, --flag-truncation=STRING   use STRING for flagging line truncations\n");
    fputs_unlocked(v11, v10);
    v12 = stdout;
    v13 = gettext(
            "  -M, --macro-name=STRING        macro name to use instead of `xx'\n"
            "  -O, --format=roff              generate output as roff directives\n"
            "  -R, --right-side-refs          put references at right, not counted in -w\n"
            "  -S, --sentence-regexp=REGEXP   for end of lines or end of sentences\n"
            "  -T, --format=tex               generate output as TeX directives\n");
    fputs_unlocked(v13, v12);
    v14 = stdout;
    v15 = gettext(
            "  -W, --word-regexp=REGEXP       use REGEXP to match each keyword\n"
            "  -b, --break-file=FILE          word break characters in this FILE\n"
            "  -f, --ignore-case              fold lower case to upper case for sorting\n"
            "  -g, --gap-size=NUMBER          gap size in columns between output fields\n"
            "  -i, --ignore-file=FILE         read ignore word list from FILE\n"
            "  -o, --only-file=FILE           read only word list from this FILE\n");
    fputs_unlocked(v15, v14);
    v16 = stdout;
    v17 = gettext(
            "  -r, --references               first field of each line is a reference\n"
            "  -t, --typeset-mode               - not implemented -\n"
            "  -w, --width=NUMBER             output width in columns, reference excluded\n");
    fputs_unlocked(v17, v16);
    v18 = stdout;
    v19 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v19, v18);
    v20 = stdout;
    v21 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v21, v20);
    v22 = stdout;
    v23 = gettext("\nWith no FILE or if FILE is -, read Standard Input.  `-F /' by default.\n");
    fputs_unlocked(v23, v22);
    sub_401E3C();
  }
  exit(a1);
}
