#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40254A(_QWORD *a1, __int64 a2, _BYTE *a3, _QWORD *a4, unsigned __int64 *a5)
{
  unsigned int v6; // eax
  __int64 v7; // rbx
  char *v8; // rax
  _BYTE *v12; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int64 i; // [rsp+40h] [rbp-30h]
  unsigned __int64 v14; // [rsp+48h] [rbp-28h]
  _BYTE *v15; // [rsp+50h] [rbp-20h]
  void *ptr; // [rsp+58h] [rbp-18h]

  if ( (unsigned __int64)(a2 + 1) >= a1[2] )
    __assert_fail("start_idx + 1 < es->len", "../../src/src/tr.c", 0x320u, "find_bracketed_repeat");
  if ( !sub_4016E6(a1, a2 + 1, 42) )
    return 0xFFFFFFFFLL;
  for ( i = a2 + 2; ; ++i )
  {
    if ( a1[2] <= i || *(_BYTE *)(a1[1] + i) == 1 )
      return 0xFFFFFFFFLL;
    if ( *(_BYTE *)(*a1 + i) == 93 )
      break;
  }
  v14 = i - a2 - 2;
  *a3 = *(_BYTE *)(*a1 + a2);
  if ( v14 )
  {
    v15 = (_BYTE *)(a2 + 2 + *a1);
    if ( *v15 == 48 )
      v6 = 8;
    else
      v6 = 10;
    if ( (unsigned int)sub_406FDF(v15, &v12, v6, a4, 0LL) || *a4 == -1LL || &v15[v14] != v12 )
    {
      ptr = (void *)sub_401F92((__int64)v15, v14);
      v7 = sub_404BE5(ptr);
      v8 = gettext("invalid repeat count %s in [c*n] construct");
      error(0, 0, v8, v7);
      free(ptr);
      return 4294967294LL;
    }
  }
  else
  {
    *a4 = 0LL;
  }
  *a5 = i;
  return 0LL;
}
