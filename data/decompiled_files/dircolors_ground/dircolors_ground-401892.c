#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401892(unsigned __int8 *a1, _QWORD *a2, __int64 *a3)
{
  const unsigned __int16 *v3; // rbx
  __int64 result; // rax
  const unsigned __int16 *v5; // rbx
  const unsigned __int16 *v6; // rbx
  const unsigned __int16 *v7; // rbx
  unsigned __int8 *i; // [rsp+28h] [rbp-28h]
  unsigned __int8 *v11; // [rsp+30h] [rbp-20h]
  unsigned __int8 *v12; // [rsp+38h] [rbp-18h]

  *a2 = 0LL;
  *a3 = 0LL;
  while ( 1 )
  {
    v3 = *__ctype_b_loc();
    if ( (v3[(unsigned __int8)sub_40161D(*a1)] & 0x2000) == 0 )
      break;
    ++a1;
  }
  result = *a1;
  if ( (_BYTE)result )
  {
    result = *a1;
    if ( (_BYTE)result != 35 )
    {
      v11 = a1;
      while ( 1 )
      {
        v5 = *__ctype_b_loc();
        if ( (v5[(unsigned __int8)sub_40161D(*a1)] & 0x2000) != 0 || !*a1 )
          break;
        ++a1;
      }
      *a2 = sub_405038(v11, a1 - v11);
      result = *a1;
      if ( (_BYTE)result )
      {
        do
        {
          ++a1;
          v6 = *__ctype_b_loc();
        }
        while ( (v6[(unsigned __int8)sub_40161D(*a1)] & 0x2000) != 0 );
        result = *a1;
        if ( (_BYTE)result )
        {
          result = *a1;
          if ( (_BYTE)result != 35 )
          {
            v12 = a1;
            while ( *a1 && *a1 != 35 )
              ++a1;
            for ( i = a1 - 1; ; --i )
            {
              v7 = *__ctype_b_loc();
              if ( (v7[(unsigned __int8)sub_40161D(*i)] & 0x2000) == 0 )
                break;
            }
            result = sub_405038(v12, i + 1 - v12);
            *a3 = result;
          }
        }
      }
    }
  }
  return result;
}
