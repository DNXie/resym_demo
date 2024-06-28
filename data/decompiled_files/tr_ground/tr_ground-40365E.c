#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40365E(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  char *v3; // rax
  __int64 result; // rax
  __int64 v5; // [rsp+18h] [rbp-8h]

  if ( !byte_60B264 )
    __assert_fail("translating", "../../src/src/tr.c", 0x57Au, "string2_extend");
  if ( *(_QWORD *)(a1 + 24) <= *(_QWORD *)(a2 + 24) )
    __assert_fail("s1->length > s2->length", "../../src/src/tr.c", 0x57Bu, "string2_extend");
  if ( !*(_QWORD *)(a2 + 24) )
    __assert_fail("s2->length > 0", "../../src/src/tr.c", 0x57Cu, "string2_extend");
  v5 = *(_QWORD *)(a2 + 8);
  v2 = *(_DWORD *)v5;
  if ( *(_DWORD *)v5 == 2 )
  {
    v3 = gettext("when translating with string1 longer than string2,\nthe latter string must not end with a character class");
    error(1, 0, v3);
    abort();
  }
  if ( v2 > 2 )
  {
    if ( v2 == 3 )
      abort();
    if ( v2 != 4 )
LABEL_20:
      abort();
    goto LABEL_18;
  }
  if ( !v2 )
  {
LABEL_18:
    sub_40235F(a2, *(_BYTE *)(v5 + 16), *(_QWORD *)(a1 + 24) - *(_QWORD *)(a2 + 24));
    goto LABEL_21;
  }
  if ( v2 != 1 )
    goto LABEL_20;
  sub_40235F(a2, *(_BYTE *)(v5 + 17), *(_QWORD *)(a1 + 24) - *(_QWORD *)(a2 + 24));
LABEL_21:
  result = a2;
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  return result;
}
