#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_407BDE(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  int v6; // [rsp+14h] [rbp-1Ch]
  struct stat *s; // [rsp+18h] [rbp-18h]

  s = (struct stat *)(a2 + 120);
  if ( !*(_QWORD *)(a2 + 88) && (*(_DWORD *)(a1 + 72) & 1) != 0 )
    a3 = 1;
  if ( (*(_DWORD *)(a1 + 72) & 2) != 0 || a3 )
  {
    if ( (unsigned int)sub_40AA50(*(char **)(a2 + 48), s) )
    {
      v6 = *__errno_location();
      if ( *__errno_location() == 2 && !(unsigned int)sub_40AA70(*(char **)(a2 + 48), s) )
      {
        *__errno_location() = 0;
        return 13LL;
      }
      *(_DWORD *)(a2 + 64) = v6;
      goto LABEL_14;
    }
  }
  else if ( (unsigned int)sub_40AA80(*(_DWORD *)(a1 + 44), *(char **)(a2 + 48), s, 256) )
  {
    *(_DWORD *)(a2 + 64) = *__errno_location();
LABEL_14:
    memset(s, 0, sizeof(struct stat));
    return 10LL;
  }
  switch ( *(_DWORD *)(a2 + 144) & 0xF000 )
  {
    case 16384:
      if ( (*(_DWORD *)(a1 + 72) & 0x20) != 0 )
        v4 = 0LL;
      else
        v4 = 2LL;
      *(_QWORD *)(a2 + 104) = *(_QWORD *)(a2 + 136) - v4;
      if ( *(_BYTE *)(a2 + 264) != 46 || *(_BYTE *)(a2 + 265) && (*(_BYTE *)(a2 + 265) != 46 || *(_BYTE *)(a2 + 266)) )
      {
        result = 1LL;
      }
      else if ( *(_QWORD *)(a2 + 88) )
      {
        result = 5LL;
      }
      else
      {
        result = 1LL;
      }
      break;
    case 40960:
      result = 12LL;
      break;
    case 32768:
      result = 8LL;
      break;
    default:
      result = 3LL;
      break;
  }
  return result;
}
