#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402D69(int a1, _QWORD *a2)
{
  unsigned int v4; // eax
  _QWORD *v5; // [rsp+0h] [rbp-30h]
  int v6; // [rsp+10h] [rbp-20h]
  int v7; // [rsp+14h] [rbp-1Ch]
  char *i; // [rsp+18h] [rbp-18h]
  _QWORD *v9; // [rsp+18h] [rbp-18h]
  char *v10; // [rsp+18h] [rbp-18h]
  __int64 v11; // [rsp+20h] [rbp-10h]
  FILE *v12; // [rsp+28h] [rbp-8h]

  v5 = a2;
  dword_6103D4 = 0;
  free(qword_610340);
  qword_610340 = (void *)sub_40A607(dword_61025C, 64LL);
  if ( byte_610370 )
  {
    v7 = a1;
    for ( i = (char *)qword_610340; v7--; i += 64 )
    {
      if ( (unsigned __int8)sub_403161(*v5, i) != 1 )
      {
        i -= 64;
        --dword_61025C;
      }
      ++v5;
    }
    if ( !dword_61025C )
      return 0LL;
    sub_40352D(&locale, 0xFFFFFFFFLL);
  }
  else
  {
    v9 = qword_610340;
    if ( a1 <= 0 )
    {
      v9[1] = gettext("standard input");
      *v9 = stdin;
      byte_610379 = 1;
      *((_DWORD *)v9 + 4) = 0;
      *((_BYTE *)v9 + 57) = 0;
      ++dword_6103D4;
      sub_40352D(&locale, 0xFFFFFFFFLL);
      *((_DWORD *)v9 + 11) = 0;
    }
    else
    {
      if ( (unsigned __int8)sub_403161(*a2, qword_610340) != 1 )
        return 0LL;
      v4 = fileno((FILE *)*v9);
      sub_40352D(*a2, v4);
      *((_DWORD *)v9 + 11) = 0;
    }
    v11 = v9[1];
    v12 = (FILE *)*v9;
    v6 = dword_61025C - 1;
    v10 = (char *)(v9 + 8);
    while ( v6 )
    {
      *((_QWORD *)v10 + 1) = v11;
      *(_QWORD *)v10 = v12;
      *((_DWORD *)v10 + 4) = 0;
      v10[57] = 0;
      *((_DWORD *)v10 + 11) = 0;
      --v6;
      v10 += 64;
    }
  }
  dword_6103A8 = dword_6103D4;
  return 1LL;
}
