#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40BF5C(__int64 a1)
{
  __int64 result; // rax
  size_t v2; // rax
  __int64 v3; // rax

  result = *(unsigned __int8 *)(a1 + 12);
  if ( !(_BYTE)result )
  {
    if ( !*(_BYTE *)a1 )
    {
      if ( sub_40BF26(**(_BYTE **)(a1 + 16)) )
      {
        *(_QWORD *)(a1 + 24) = 1LL;
        *(_DWORD *)(a1 + 36) = **(char **)(a1 + 16);
        *(_BYTE *)(a1 + 32) = 1;
LABEL_19:
        result = a1;
        *(_BYTE *)(a1 + 12) = 1;
        return result;
      }
      if ( !mbsinit((const mbstate_t *)(a1 + 4)) )
        __assert_fail("mbsinit (&iter->state)", "../../src/lib/mbuiter.h", 0x8Eu, "mbuiter_multi_next");
      *(_BYTE *)a1 = 1;
    }
    v2 = __ctype_get_mb_cur_max();
    v3 = sub_408911(*(const void **)(a1 + 16), v2);
    *(_QWORD *)(a1 + 24) = mbrtowc((wchar_t *)(a1 + 36), *(const char **)(a1 + 16), v3, (mbstate_t *)(a1 + 4));
    if ( *(_QWORD *)(a1 + 24) == -1LL )
    {
      *(_QWORD *)(a1 + 24) = 1LL;
      *(_BYTE *)(a1 + 32) = 0;
    }
    else if ( *(_QWORD *)(a1 + 24) == -2LL )
    {
      *(_QWORD *)(a1 + 24) = strlen(*(const char **)(a1 + 16));
      *(_BYTE *)(a1 + 32) = 0;
    }
    else
    {
      if ( !*(_QWORD *)(a1 + 24) )
      {
        *(_QWORD *)(a1 + 24) = 1LL;
        if ( **(_BYTE **)(a1 + 16) )
          __assert_fail("*iter->cur.ptr == '\\0'", "../../src/lib/mbuiter.h", 0xAAu, "mbuiter_multi_next");
        if ( *(_DWORD *)(a1 + 36) )
          __assert_fail("iter->cur.wc == 0", "../../src/lib/mbuiter.h", 0xABu, "mbuiter_multi_next");
      }
      *(_BYTE *)(a1 + 32) = 1;
      if ( mbsinit((const mbstate_t *)(a1 + 4)) )
        *(_BYTE *)a1 = 0;
    }
    goto LABEL_19;
  }
  return result;
}
