#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401C8B(__int64 a1)
{
  __int64 i; // [rsp+18h] [rbp-18h]
  __int64 v3; // [rsp+20h] [rbp-10h]
  __int64 v4; // [rsp+28h] [rbp-8h]

  if ( *(_QWORD *)(a1 + 32) )
  {
    if ( qword_607258 )
    {
      for ( i = a1 + 48; *(_QWORD *)i; i = *(_QWORD *)i + 8LL )
      {
        if ( **(_QWORD **)i == qword_607258 )
        {
          if ( !*(_QWORD *)(a1 + 40) )
          {
            *(_QWORD *)(a1 + 40) = qword_607258;
            qword_607258 = a1;
            return 0LL;
          }
          while ( qword_607258 )
          {
            v3 = *(_QWORD *)(qword_607258 + 40);
            fprintf(stderr, "%s: %s\n", (const char *)qword_607278, *(const char **)qword_607258);
            if ( qword_607258 == a1 )
            {
              --*(_QWORD *)(**(_QWORD **)i + 32LL);
              *(_QWORD *)i = *(_QWORD *)(*(_QWORD *)i + 8LL);
              break;
            }
            *(_QWORD *)(qword_607258 + 40) = 0LL;
            qword_607258 = v3;
          }
          while ( qword_607258 )
          {
            v4 = *(_QWORD *)(qword_607258 + 40);
            *(_QWORD *)(qword_607258 + 40) = 0LL;
            qword_607258 = v4;
          }
          return 1LL;
        }
      }
    }
    else
    {
      qword_607258 = a1;
    }
  }
  return 0LL;
}
