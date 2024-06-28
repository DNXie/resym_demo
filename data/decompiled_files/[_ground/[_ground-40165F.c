#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_40165F(const char *a1, __int64 a2)
{
  fprintf(stderr, "%s: ", *(const char **)qword_609238);
  fprintf(stderr, a1, a2);
  fputc_unlocked(10, stderr);
  fflush_unlocked(stderr);
  exit(2);
}
