#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_405620(void (__fastcall *a1)(void *))
{
  void *v1; // rdx

  if ( &qword_608208 )
    v1 = (void *)qword_608208;
  else
    v1 = 0LL;
  return __cxa_atexit(a1, 0LL, v1);
}