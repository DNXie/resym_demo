#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_402C30(const char *a1, unsigned int a2)
{
  int *v2; // rax
  char *v3; // [rsp+10h] [rbp-10h] BYREF
  void *ptr; // [rsp+18h] [rbp-8h] BYREF

  if ( (unsigned int)sub_405ECC(a1, &v3, &ptr, a2) )
  {
    v2 = __errno_location();
    error(1, *v2, "%s", a1);
  }
  if ( byte_60F2C1 )
    sub_4028C1((__int64)v3, (__int64)ptr);
  else
    sub_402A22(v3, (__int64)ptr);
  free(ptr);
}
