#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_411123(_QWORD *a1)
{
  __int64 result; // rax
  int v2; // [rsp+18h] [rbp-8h]
  int v3; // [rsp+1Ch] [rbp-4h]

  v2 = 0;
  v3 = 0;
  if ( !a1 )
    __assert_fail("timespec", "../../src/lib/utimens.c", 0x59u, "validate_timespec");
  if ( (a1[1] == 0x3FFFFFFFLL || a1[1] == 1073741822LL || (__int64)a1[1] >= 0 && (__int64)a1[1] <= 999999999)
    && (a1[3] == 0x3FFFFFFFLL || a1[3] == 1073741822LL || (__int64)a1[3] >= 0 && (__int64)a1[3] <= 999999999) )
  {
    if ( a1[1] == 0x3FFFFFFFLL || a1[1] == 1073741822LL )
    {
      *a1 = 0LL;
      v2 = 1;
      if ( a1[1] == 1073741822LL )
        v3 = 1;
    }
    if ( a1[3] == 0x3FFFFFFFLL || a1[3] == 1073741822LL )
    {
      a1[2] = 0LL;
      v2 = 1;
      if ( a1[3] == 1073741822LL )
        ++v3;
    }
    result = (unsigned int)(v3 == 1) + v2;
  }
  else
  {
    *__errno_location() = 22;
    result = 0xFFFFFFFFLL;
  }
  return result;
}
