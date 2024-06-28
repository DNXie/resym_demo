#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_4017DA(const char *a1, unsigned int a2)
{
  int *v2; // rax
  __int64 v3; // [rsp+10h] [rbp-10h] BYREF
  void *ptr; // [rsp+18h] [rbp-8h] BYREF

  if ( (unsigned int)sub_4042C6(a1, &v3, &ptr, a2) )
  {
    v2 = __errno_location();
    error(1, *v2, "%s", a1);
  }
  sub_401682(v3, (__int64)ptr);
  free(ptr);
}
