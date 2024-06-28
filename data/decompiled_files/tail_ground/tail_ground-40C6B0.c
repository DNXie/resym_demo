#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_40C6B0(void (__fastcall *a1)(void *))
{
  void *v1; // rdx

  if ( &qword_610248 )
    v1 = (void *)qword_610248;
  else
    v1 = 0LL;
  return __cxa_atexit(a1, 0LL, v1);
}
