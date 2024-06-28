#include "/share/binary_recovery/clang-parser/defs.hh"
bool sub_401A3B()
{
  char *v0; // rax
  __int64 v1; // rbx
  char *v2; // rax
  __int64 v3; // rbx
  char *v4; // rax
  char v6; // [rsp+Ah] [rbp-16h]
  char v7; // [rsp+Bh] [rbp-15h]
  unsigned int i; // [rsp+Ch] [rbp-14h]

  v7 = 0;
  while ( dword_609230 < dword_609234
       && **(_BYTE **)(8LL * dword_609230 + qword_609238) == 33
       && !*(_BYTE *)(*(_QWORD *)(8LL * dword_609230 + qword_609238) + 1LL) )
  {
    sub_4016DE(1);
    v7 = v7 == 0;
  }
  if ( dword_609230 >= dword_609234 )
    sub_401736();
  if ( **(_BYTE **)(8LL * dword_609230 + qword_609238) != 40
    || *(_BYTE *)(*(_QWORD *)(8LL * dword_609230 + qword_609238) + 1LL) )
  {
    if ( dword_609234 - dword_609230 > 3
      && !strcmp(*(const char **)(8LL * dword_609230 + qword_609238), "-l")
      && sub_40190E(*(const char **)(8 * (dword_609230 + 2LL) + qword_609238)) )
    {
      v6 = sub_401E45(1LL);
    }
    else if ( dword_609234 - dword_609230 > 2 && sub_40190E(*(const char **)(8 * (dword_609230 + 1LL) + qword_609238)) )
    {
      v6 = sub_401E45(0LL);
    }
    else if ( **(_BYTE **)(8LL * dword_609230 + qword_609238) == 45
           && *(_BYTE *)(*(_QWORD *)(8LL * dword_609230 + qword_609238) + 1LL)
           && !*(_BYTE *)(*(_QWORD *)(8LL * dword_609230 + qword_609238) + 2LL) )
    {
      if ( !(unsigned __int8)sub_4030E9(*(_QWORD *)(8LL * dword_609230 + qword_609238)) )
      {
        v3 = *(_QWORD *)(8LL * dword_609230 + qword_609238);
        v4 = gettext("%s: unary operator expected");
        sub_40165F(v4, v3);
      }
      v6 = sub_402825();
    }
    else
    {
      v6 = **(_BYTE **)(8LL * dword_609230 + qword_609238) != 0;
      sub_4016DE(0);
    }
  }
  else
  {
    sub_4016DE(1);
    for ( i = 1;
          (int)(i + dword_609230) < dword_609234
       && strcmp(*(const char **)(8LL * (int)(dword_609230 + i) + qword_609238), ")");
          ++i )
    {
      if ( i == 4 )
      {
        i = dword_609234 - dword_609230;
        break;
      }
    }
    v6 = sub_40349F(i);
    if ( !*(_QWORD *)(8LL * dword_609230 + qword_609238) )
    {
      v0 = gettext("')' expected");
      sub_40165F(v0, 0LL);
    }
    if ( **(_BYTE **)(8LL * dword_609230 + qword_609238) != 41
      || *(_BYTE *)(*(_QWORD *)(8LL * dword_609230 + qword_609238) + 1LL) )
    {
      v1 = *(_QWORD *)(8LL * dword_609230 + qword_609238);
      v2 = gettext("')' expected, found %s");
      sub_40165F(v2, v1);
    }
    sub_4016DE(0);
  }
  return v7 != v6;
}
