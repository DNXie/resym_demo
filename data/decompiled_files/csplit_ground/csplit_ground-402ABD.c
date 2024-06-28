#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402ABD(__int64 a1, __int64 a2)
{
  char *v2; // rax
  char *v3; // rax
  __int64 result; // rax
  char v5; // [rsp+13h] [rbp-1Dh]
  int v6; // [rsp+14h] [rbp-1Ch]
  int v7; // [rsp+14h] [rbp-1Ch]
  __int64 range; // [rsp+18h] [rbp-18h]
  __int64 rangea; // [rsp+18h] [rbp-18h]
  __int64 v10; // [rsp+20h] [rbp-10h]
  __int64 v11; // [rsp+20h] [rbp-10h]
  __int64 v12; // [rsp+20h] [rbp-10h]
  unsigned __int64 v13; // [rsp+28h] [rbp-8h]

  v5 = *(_BYTE *)(a1 + 29);
  if ( v5 != 1 )
    sub_402FA4();
  if ( *(__int64 *)a1 < 0 )
  {
    do
    {
      v12 = sub_402599(++qword_60B340);
      if ( !v12 )
      {
        if ( *(_BYTE *)(a1 + 28) )
        {
          if ( v5 != 1 )
          {
            sub_40283A();
            sub_403131();
          }
          exit(0);
        }
        sub_4029CF(a1, a2, v5);
      }
      rangea = *(_QWORD *)v12;
      if ( *(_BYTE *)(*(_QWORD *)v12 - 1LL + *(_QWORD *)(v12 + 8)) == 10 )
        LODWORD(rangea) = rangea - 1;
      v7 = re_search((struct re_pattern_buffer *)(a1 + 32), *(const char **)(v12 + 8), rangea, 0, rangea, 0LL);
      if ( v7 == -2 )
      {
        v3 = gettext("error in regular expression search");
        error(0, 0, v3);
        sub_401C9C();
      }
    }
    while ( v7 == -1 );
  }
  else
  {
    while ( 1 )
    {
      v10 = sub_402599(++qword_60B340);
      if ( !v10 )
      {
        if ( *(_BYTE *)(a1 + 28) )
        {
          if ( v5 != 1 )
          {
            sub_40283A();
            sub_403131();
          }
          exit(0);
        }
        sub_4029CF(a1, a2, v5);
      }
      range = *(_QWORD *)v10;
      if ( *(_BYTE *)(*(_QWORD *)v10 - 1LL + *(_QWORD *)(v10 + 8)) == 10 )
        LODWORD(range) = range - 1;
      v6 = re_search((struct re_pattern_buffer *)(a1 + 32), *(const char **)(v10 + 8), range, 0, range, 0LL);
      if ( v6 == -2 )
      {
        v2 = gettext("error in regular expression search");
        error(0, 0, v2);
        sub_401C9C();
      }
      if ( v6 != -1 )
        break;
      v11 = sub_402446();
      if ( v5 != 1 )
        sub_40332F(v11);
    }
  }
  v13 = *(_QWORD *)a1 + qword_60B340;
  sub_402739(v13, v5, *(_DWORD *)(a1 + 24));
  if ( v5 != 1 )
    sub_403131();
  result = *(_QWORD *)a1;
  if ( *(__int64 *)a1 > 0 )
  {
    result = v13;
    qword_60B340 = v13;
  }
  return result;
}
