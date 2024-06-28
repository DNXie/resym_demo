#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40219D(__int64 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  char *v3; // rax
  __int64 result; // rax
  char *ptr; // [rsp+18h] [rbp-18h]
  char *v7; // [rsp+20h] [rbp-10h]
  __int64 v8; // [rsp+28h] [rbp-8h]

  if ( a3 >= a2 )
  {
    v8 = sub_406D88(32LL);
    *(_QWORD *)(v8 + 8) = 0LL;
    *(_DWORD *)v8 = 1;
    *(_BYTE *)(v8 + 16) = a2;
    *(_BYTE *)(v8 + 17) = a3;
    if ( !*(_QWORD *)(a1 + 8) )
      __assert_fail("list->tail", "../../src/src/tr.c", 0x2ADu, "append_range");
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = v8;
    *(_QWORD *)(a1 + 8) = v8;
    result = 1LL;
  }
  else
  {
    ptr = sub_401F1F(a2);
    v7 = sub_401F1F(a3);
    v3 = gettext("range-endpoints of `%s-%s' are in reverse collating sequence order");
    error(0, 0, v3, ptr, v7);
    free(ptr);
    free(v7);
    result = 0LL;
  }
  return result;
}
