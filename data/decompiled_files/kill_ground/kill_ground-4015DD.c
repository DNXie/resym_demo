#include "/share/binary_recovery/clang-parser/defs.hh"
int sub_4015DD()
{
  __int64 v0; // rbx
  char *v1; // rax
  char *v2; // rax
  FILE *v3; // rbx
  char *v4; // rax
  __int64 v5; // rbx
  char *v6; // rax
  __int64 v7; // rbx
  char *v8; // rax
  const char *s1; // [rsp+8h] [rbp-18h]

  v0 = sub_402271(qword_607450);
  v1 = gettext("\nReport %s bugs to %s\n");
  printf(v1, v0, "bug-coreutils@gnu.org");
  v2 = gettext("%s home page: <%s>\n");
  printf(v2, "GNU coreutils", "http://www.gnu.org/software/coreutils/");
  v3 = stdout;
  v4 = gettext("General help using GNU software: <http://www.gnu.org/gethelp/>\n");
  fputs_unlocked(v4, v3);
  s1 = setlocale(5, 0LL);
  if ( s1 && strncmp(s1, "en_", 3uLL) )
  {
    v5 = sub_402271(qword_607450);
    v6 = gettext("Report %s translation bugs to <http://translationproject.org/team/>\n");
    printf(v6, v5);
  }
  v7 = sub_402271(qword_607450);
  v8 = gettext("For complete documentation, run: info coreutils '%s invocation'\n");
  return printf(v8, v7);
}
