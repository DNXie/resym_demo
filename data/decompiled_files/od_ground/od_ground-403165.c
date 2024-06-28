#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_403165(__int64 a1)
{
  char *v2; // [rsp+8h] [rbp-18h]
  char *v3; // [rsp+10h] [rbp-10h] BYREF
  __int64 v4; // [rsp+18h] [rbp-8h]

  v2 = (char *)a1;
  v4 = a1;
  if ( !a1 )
    __assert_fail("s != ((void *)0)", "../../src/src/od.c", 0x3A2u, "decode_format_string");
  while ( *v2 )
  {
    if ( qword_612338 <= (unsigned __int64)qword_612330 )
      qword_612328 = sub_407B68(qword_612328, &qword_612338, 40LL);
    if ( (unsigned __int8)sub_402826(v4, v2, &v3, 40 * qword_612330 + qword_612328) != 1 )
      return 0LL;
    if ( v2 == v3 )
      __assert_fail("s != next", "../../src/src/od.c", 0x3AEu, "decode_format_string");
    v2 = v3;
    ++qword_612330;
  }
  return 1LL;
}
