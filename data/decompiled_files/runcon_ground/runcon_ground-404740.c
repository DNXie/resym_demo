#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_404740(void (__fastcall *a1)(void *))
{
  void *v1; // rdx

  if ( &qword_607178 )
    v1 = (void *)qword_607178;
  else
    v1 = 0LL;
  return __cxa_atexit(a1, 0LL, v1);
}