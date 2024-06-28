#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_413F20(void (__fastcall *a1)(void *))
{
  void *v1; // rdx

  if ( qword_618328 )
    v1 = (void *)qword_618328[0];
  else
    v1 = 0LL;
  return __cxa_atexit(a1, 0LL, v1);
}
