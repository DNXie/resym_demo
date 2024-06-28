#include "/share/binary_recovery/clang-parser/defs.hh"
int sub_403C3B()
{
  char *v0; // rax
  char *v1; // rax
  FILE *v2; // rbx
  char *v3; // rax

  v0 = gettext("\nReport bugs to: %s\n");
  printf(v0, "bug-coreutils@gnu.org");
  v1 = gettext("%s home page: <%s>\n");
  printf(v1, "GNU coreutils", "http://www.gnu.org/software/coreutils/");
  v2 = stdout;
  v3 = gettext("General help using GNU software: <http://www.gnu.org/gethelp/>\n");
  return fputs_unlocked(v3, v2);
}
