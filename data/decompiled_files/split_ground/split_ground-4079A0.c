#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4079A0(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned __int8 *)(a1 + 20);
  if ( !(_BYTE)result )
  {
    if ( !*(_BYTE *)(a1 + 8) )
    {
      if ( sub_40796A(**(_BYTE **)(a1 + 24)) )
      {
        *(_QWORD *)(a1 + 32) = 1LL;
        *(_DWORD *)(a1 + 44) = **(char **)(a1 + 24);
        *(_BYTE *)(a1 + 40) = 1;
LABEL_19:
        result = a1;
        *(_BYTE *)(a1 + 20) = 1;
        return result;
      }
      if ( !mbsinit((const mbstate_t *)(a1 + 12)) )
        __assert_fail("mbsinit (&iter->state)", "../../src/lib/mbiter.h", 0x86u, "mbiter_multi_next");
      *(_BYTE *)(a1 + 8) = 1;
    }
    *(_QWORD *)(a1 + 32) = mbrtowc(
                             (wchar_t *)(a1 + 44),
                             *(const char **)(a1 + 24),
                             *(_QWORD *)a1 - *(_QWORD *)(a1 + 24),
                             (mbstate_t *)(a1 + 12));
    if ( *(_QWORD *)(a1 + 32) == -1LL )
    {
      *(_QWORD *)(a1 + 32) = 1LL;
      *(_BYTE *)(a1 + 40) = 0;
    }
    else if ( *(_QWORD *)(a1 + 32) == -2LL )
    {
      *(_QWORD *)(a1 + 32) = *(_QWORD *)a1 - *(_QWORD *)(a1 + 24);
      *(_BYTE *)(a1 + 40) = 0;
    }
    else
    {
      if ( !*(_QWORD *)(a1 + 32) )
      {
        *(_QWORD *)(a1 + 32) = 1LL;
        if ( **(_BYTE **)(a1 + 24) )
          __assert_fail("*iter->cur.ptr == '\\0'", "../../src/lib/mbiter.h", 0xA1u, "mbiter_multi_next");
        if ( *(_DWORD *)(a1 + 44) )
          __assert_fail("iter->cur.wc == 0", "../../src/lib/mbiter.h", 0xA2u, "mbiter_multi_next");
      }
      *(_BYTE *)(a1 + 40) = 1;
      if ( mbsinit((const mbstate_t *)(a1 + 12)) )
        *(_BYTE *)(a1 + 8) = 0;
    }
    goto LABEL_19;
  }
  return result;
}
