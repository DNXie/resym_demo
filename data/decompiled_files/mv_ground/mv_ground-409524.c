#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_409524(char *a1, char *a2, char a3, unsigned int *a4, bool *a5, _BYTE *a6)
{
  char v11; // [rsp+5Fh] [rbp-1h] BYREF

  if ( !(unsigned __int8)sub_4093F2((__int64)a4) )
    __assert_fail("valid_options (options)", "../../src/src/copy.c", 0xA2Au, "copy");
  qword_61B420 = (__int64)a1;
  qword_61B428 = (__int64)a2;
  v11 = 0;
  return sub_406E71(a1, a2, a3, 0LL, 0LL, a4, 1, &v11, a5, a6);
}
