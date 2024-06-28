#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_406A50(__int64 a1, char a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+18h] [rbp-28h]
  unsigned __int64 v5; // [rsp+18h] [rbp-28h]
  __int64 v6; // [rsp+20h] [rbp-20h]
  __int64 *v7; // [rsp+28h] [rbp-18h]
  void *ptr; // [rsp+30h] [rbp-10h]
  __int64 v9; // [rsp+38h] [rbp-8h]

  if ( a1 && qword_61D620 )
    sub_4050DD(0LL, a1, 0);
  v4 = qword_61D638;
  while ( v4-- )
  {
    v7 = (__int64 *)*((_QWORD *)qword_61D640 + v4);
    if ( sub_4068B3((__int64)v7) && (!a1 || !sub_406A26(*v7)) )
    {
      if ( a1 && *(_BYTE *)*v7 != 47 )
      {
        ptr = (void *)sub_40BAB3(a1, *v7, 0LL);
        sub_4050DD((__int64)ptr, v7[1], a2);
        free(ptr);
      }
      else
      {
        sub_4050DD(*v7, v7[1], a2);
      }
      if ( *((_DWORD *)v7 + 40) == 9 )
        free((void *)*v7);
    }
  }
  v5 = 0LL;
  v6 = 0LL;
  while ( v5 < qword_61D638 )
  {
    v9 = *((_QWORD *)qword_61D640 + v5);
    *((_QWORD *)qword_61D640 + v6) = v9;
    v6 += *(_DWORD *)(v9 + 160) != 9;
    ++v5;
  }
  result = v6;
  qword_61D638 = v6;
  return result;
}
