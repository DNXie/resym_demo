#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_410780(__int64 a1)
{
  __int64 result; // rax
  bool v2; // [rsp+1Fh] [rbp-31h]
  _QWORD *v3; // [rsp+20h] [rbp-30h]
  __int64 v4; // [rsp+28h] [rbp-28h]
  __int64 v5; // [rsp+30h] [rbp-20h]
  __int64 v6; // [rsp+30h] [rbp-20h]
  _BYTE *ptr; // [rsp+38h] [rbp-18h]
  __int64 v8; // [rsp+40h] [rbp-10h] BYREF

  v4 = *(_QWORD *)(a1 + 80);
  v3 = *(_QWORD **)(v4 + 80);
  if ( (*(_DWORD *)(v4 + 72) & 0x200) == 0 )
    return 0LL;
  if ( !v3 )
  {
    *(_QWORD *)(v4 + 80) = sub_409151(
                             13LL,
                             0LL,
                             (unsigned __int64 (__fastcall *)(__int64, unsigned __int64))sub_410725,
                             (bool (__fastcall *)(__int64, __int64))sub_41074E,
                             (size_t)free);
    v3 = *(_QWORD **)(v4 + 80);
    if ( !v3 )
      return 0LL;
  }
  v8 = *(_QWORD *)(a1 + 120);
  v5 = sub_408B18((__int64)v3, (__int64)&v8);
  if ( v5 )
    return *(unsigned __int8 *)(v5 + 8);
  ptr = malloc(0x10uLL);
  if ( !ptr )
    return 0LL;
  v2 = sub_4106DB(*(_DWORD *)(v4 + 44));
  ptr[8] = v2;
  *(_QWORD *)ptr = *(_QWORD *)(a1 + 120);
  v6 = sub_409DE7(v3, (__int64)ptr);
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
