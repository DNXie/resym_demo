#include "/share/binary_recovery/clang-parser/defs.hh"
int sub_40225D()
{
  FILE *v0; // rbx
  char *v1; // rax

  v0 = stdout;
  v1 = gettext(
         "\n"
         "SIZE may be (or may be an integer optionally followed by) one of following:\n"
         "KB 1000, K 1024, MB 1000*1000, M 1024*1024, and so on for G, T, P, E, Z, Y.\n");
  return fputs_unlocked(v1, v0);
}
