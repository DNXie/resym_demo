#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_402560(void *a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // rax
  int result; // eax
  char v5; // [rsp+1Fh] [rbp-21h]
  __int64 v6; // [rsp+30h] [rbp-10h]

  if ( c < 0 )
    v2 = 32;
  else
    v2 = c;
  v5 = v2;
  if ( qword_60A340 )
  {
    v6 = qword_60A340;
    while ( 1 )
    {
      if ( *(_DWORD *)v6 )
      {
        v3 = (__int64)(*(_DWORD *)v6 == 1 ? a1 : a2);
        sub_4023D9(*(_QWORD *)(v6 + 8), v3);
      }
      else if ( a1 == &unk_60A360 )
      {
        sub_4023D9(qword_60A208, a2);
      }
      else
      {
        sub_4023D9(qword_60A200, (__int64)a1);
      }
      v6 = *(_QWORD *)(v6 + 16);
      if ( !v6 )
        break;
      putchar_unlocked(v5);
    }
    result = putchar_unlocked(10);
  }
  else
  {
    if ( a1 == &unk_60A360 )
      sub_4023D9(qword_60A208, a2);
    else
      sub_4023D9(qword_60A200, (__int64)a1);
    sub_402497((__int64)a1, qword_60A200, qword_60A318);
    sub_402497(a2, qword_60A208, qword_60A320);
    result = putchar_unlocked(10);
  }
  return result;
}
