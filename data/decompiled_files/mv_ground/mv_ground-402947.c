#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402947(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  unsigned __int8 v7; // [rsp+2Fh] [rbp-11h]
  __int64 v8; // [rsp+30h] [rbp-10h]
  void *ptr; // [rsp+38h] [rbp-8h]

  if ( byte_61B400 )
    sub_40AE80(a1);
  if ( !a3 )
    return (unsigned __int8)sub_40284D(a1, a2, a4);
  v8 = sub_40ADC9(a1);
  ptr = (void *)sub_40B497(a2, v8, 0LL);
  sub_40AE80(ptr);
  v7 = sub_40284D(a1, (__int64)ptr, a4);
  free(ptr);
  return v7;
}
