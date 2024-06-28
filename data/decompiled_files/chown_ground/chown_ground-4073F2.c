#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4073F2(__int64 a1)
{
  __int64 result; // rax
  bool v2; // [rsp+1Fh] [rbp-31h]
  __int64 v3; // [rsp+20h] [rbp-30h]
  __int64 v4; // [rsp+28h] [rbp-28h]
  __int64 v5; // [rsp+30h] [rbp-20h]
  __int64 v6; // [rsp+30h] [rbp-20h]
  _BYTE *ptr; // [rsp+38h] [rbp-18h]
  __int64 v8; // [rsp+40h] [rbp-10h] BYREF

  v4 = *(_QWORD *)(a1 + 80);
  v3 = *(_QWORD *)(v4 + 80);
  if ( (*(_DWORD *)(v4 + 72) & 0x200) == 0 )
    return 0LL;
  if ( !v3 )
  {
    *(_QWORD *)(v4 + 80) = sub_40A0E1(13LL, 0LL, sub_407397, sub_4073C0, free);
    v3 = *(_QWORD *)(v4 + 80);
    if ( !v3 )
      return 0LL;
  }
  v8 = *(_QWORD *)(a1 + 120);
  v5 = sub_409AA8(v3, &v8);
  if ( v5 )
    return *(unsigned __int8 *)(v5 + 8);
  ptr = malloc(0x10uLL);
  if ( !ptr )
    return 0LL;
  v2 = sub_40734D(*(_DWORD *)(v4 + 44));
  ptr[8] = v2;
  *(_QWORD *)ptr = *(_QWORD *)(a1 + 120);
  v6 = sub_40AD77(v3, ptr);
  if ( v6 )
  {
    if ( (_BYTE *)v6 != ptr )
      abort();
    result = v2;
  }
  else
  {
    free(ptr);
    result = 0LL;
  }
  return result;
}
