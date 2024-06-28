#include "/share/binary_recovery/clang-parser/defs.hh"
bool sub_401A3B()
{
  bool v0; // al
  char *v1; // rax
  __int64 v2; // rbx
  char *v3; // rax
  __int64 v4; // rbx
  char *v5; // rax
  char v7; // [rsp+Ah] [rbp-16h]
  char v8; // [rsp+Bh] [rbp-15h]
  int i; // [rsp+Ch] [rbp-14h]

  v8 = 0;
  while ( dword_609230 < dword_609234
       && **(_BYTE **)(8LL * dword_609230 + qword_609238) == 33
       && !*(_BYTE *)(*(_QWORD *)(8LL * dword_609230 + qword_609238) + 1LL) )
  {
    sub_4016DE(1);
    v8 = v8 == 0;
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
      v7 = sub_401E45(1);
    }
    else if ( dword_609234 - dword_609230 > 2 && sub_40190E(*(const char **)(8 * (dword_609230 + 1LL) + qword_609238)) )
    {
      v7 = sub_401E45(0);
    }
    else if ( **(_BYTE **)(8LL * dword_609230 + qword_609238) == 45
           && *(_BYTE *)(*(_QWORD *)(8LL * dword_609230 + qword_609238) + 1LL)
           && !*(_BYTE *)(*(_QWORD *)(8LL * dword_609230 + qword_609238) + 2LL) )
    {
      if ( !sub_4030E9(*(_BYTE **)(8LL * dword_609230 + qword_609238)) )
      {
        v4 = *(_QWORD *)(8LL * dword_609230 + qword_609238);
        v5 = gettext("%s: unary operator expected");
        sub_40165F(v5, v4);
      }
      v7 = sub_402825();
    }
    else
    {
      v7 = **(_BYTE **)(8LL * dword_609230 + qword_609238) != 0;
      sub_4016DE(0);
    }
  }
  else
  {
    sub_4016DE(1);
    for ( i = 1;
          i + dword_609230 < dword_609234 && strcmp(*(const char **)(8LL * (dword_609230 + i) + qword_609238), ")");
          ++i )
    {
      if ( i == 4 )
      {
        v0 = sub_40349F(dword_609234 - dword_609230);
        goto LABEL_17;
      }
    }
    v0 = sub_40349F(i);
LABEL_17:
    v7 = v0;
    if ( !*(_QWORD *)(8LL * dword_609230 + qword_609238) )
    {
      v1 = gettext("')' expected");
      sub_40165F(v1, 0LL);
    }
    if ( **(_BYTE **)(8LL * dword_609230 + qword_609238) != 41
      || *(_BYTE *)(*(_QWORD *)(8LL * dword_609230 + qword_609238) + 1LL) )
    {
      v2 = *(_QWORD *)(8LL * dword_609230 + qword_609238);
      v3 = gettext("')' expected, found %s");
      sub_40165F(v3, v2);
    }
    sub_4016DE(0);
  }
  return v8 != v7;
}
