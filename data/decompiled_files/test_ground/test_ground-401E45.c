#include "/share/binary_recovery/clang-parser/defs.hh"
bool __fastcall sub_401E45(char a1)
{
  size_t v1; // rax
  unsigned __int8 *v2; // rax
  size_t v3; // rax
  unsigned __int8 *v4; // rax
  bool result; // al
  int v6; // eax
  char *v7; // rax
  bool v8; // al
  char *v9; // rax
  char *v11; // rax
  bool v12; // al
  __int64 v13; // rbx
  char *v14; // rax
  char v15; // [rsp+10h] [rbp-190h]
  bool v16; // [rsp+11h] [rbp-18Fh]
  bool v17; // [rsp+12h] [rbp-18Eh]
  bool v18; // [rsp+13h] [rbp-18Dh]
  bool v19; // [rsp+14h] [rbp-18Ch]
  bool v20; // [rsp+16h] [rbp-18Ah]
  bool v21; // [rsp+17h] [rbp-189h]
  int v22; // [rsp+18h] [rbp-188h]
  int v23; // [rsp+1Ch] [rbp-184h]
  unsigned __int8 *v24; // [rsp+20h] [rbp-180h]
  struct stat stat_buf; // [rsp+30h] [rbp-170h] BYREF
  struct stat v26; // [rsp+C0h] [rbp-E0h] BYREF
  char v27[32]; // [rsp+150h] [rbp-50h] BYREF
  char v28[24]; // [rsp+170h] [rbp-30h] BYREF
  unsigned __int64 v29; // [rsp+188h] [rbp-18h]

  v29 = __readfsqword(0x28u);
  if ( a1 )
    sub_4016DE(0);
  v22 = dword_609230 + 1;
  if ( dword_609234 - 2 > dword_609230 + 1 && !strcmp(*(const char **)(8 * (v22 + 1LL) + qword_609238), "-l") )
  {
    v15 = 1;
    sub_4016DE(0);
  }
  else
  {
    v15 = 0;
  }
  if ( **(_BYTE **)(8LL * v22 + qword_609238) == 45 )
  {
    if ( ((*(_BYTE *)(*(_QWORD *)(8LL * v22 + qword_609238) + 1LL) == 108
        || *(_BYTE *)(*(_QWORD *)(8LL * v22 + qword_609238) + 1LL) == 103)
       && (*(_BYTE *)(*(_QWORD *)(8LL * v22 + qword_609238) + 2LL) == 101
        || *(_BYTE *)(*(_QWORD *)(8LL * v22 + qword_609238) + 2LL) == 116)
       || *(_BYTE *)(*(_QWORD *)(8LL * v22 + qword_609238) + 1LL) == 101
       && *(_BYTE *)(*(_QWORD *)(8LL * v22 + qword_609238) + 2LL) == 113
       || *(_BYTE *)(*(_QWORD *)(8LL * v22 + qword_609238) + 1LL) == 110
       && *(_BYTE *)(*(_QWORD *)(8LL * v22 + qword_609238) + 2LL) == 101)
      && !*(_BYTE *)(*(_QWORD *)(8LL * v22 + qword_609238) + 3LL) )
    {
      if ( a1 )
      {
        v1 = strlen(*(const char **)(8LL * v22 - 8 + qword_609238));
        v2 = (unsigned __int8 *)sub_403AD0(v1, v27);
      }
      else
      {
        v2 = sub_40177D(*(unsigned __int8 **)(8LL * v22 - 8 + qword_609238));
      }
      v24 = v2;
      if ( v15 )
      {
        v3 = strlen(*(const char **)(8 * (v22 + 2LL) + qword_609238));
        v4 = (unsigned __int8 *)sub_403AD0(v3, v28);
      }
      else
      {
        v4 = sub_40177D(*(unsigned __int8 **)(8 * (v22 + 1LL) + qword_609238));
      }
      v23 = sub_405CC8(v24, v4);
      v16 = *(_BYTE *)(*(_QWORD *)(8LL * v22 + qword_609238) + 2LL) == 101;
      dword_609230 += 3;
      if ( *(_BYTE *)(*(_QWORD *)(8LL * v22 + qword_609238) + 1LL) == 108 )
        return v16 > v23;
      if ( *(_BYTE *)(*(_QWORD *)(8LL * v22 + qword_609238) + 1LL) == 103 )
        return -v16 < v23;
      return (v23 != 0) == v16;
    }
    v6 = *(char *)(*(_QWORD *)(8LL * v22 + qword_609238) + 1LL);
    if ( v6 == 110 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(8LL * v22 + qword_609238) + 2LL) != 116
        || *(_BYTE *)(*(_QWORD *)(8LL * v22 + qword_609238) + 3LL) )
      {
        goto LABEL_68;
      }
      dword_609230 += 3;
      if ( a1 || v15 )
      {
        v7 = gettext("-nt does not accept -l");
        sub_40165F(v7, 0LL);
      }
      v17 = sub_4018A2(*(char **)(8LL * v22 - 8 + qword_609238), (__int64 *)&stat_buf);
      v18 = sub_4018A2(*(char **)(8 * (v22 + 1LL) + qword_609238), (__int64 *)&v26);
      v8 = v17 && (!v18 || (int)sub_4014D5(stat_buf.st_dev, stat_buf.st_ino, v26.st_dev, v26.st_ino) > 0);
      result = v8;
    }
    else
    {
      if ( v6 != 111 )
      {
        if ( v6 == 101
          && *(_BYTE *)(*(_QWORD *)(8LL * v22 + qword_609238) + 2LL) == 102
          && !*(_BYTE *)(*(_QWORD *)(8LL * v22 + qword_609238) + 3LL) )
        {
          dword_609230 += 3;
          if ( a1 || v15 )
          {
            v9 = gettext("-ef does not accept -l");
            sub_40165F(v9, 0LL);
          }
          return !(unsigned int)sub_406010(*(char **)(8LL * v22 - 8 + qword_609238), &stat_buf)
              && !(unsigned int)sub_406010(*(char **)(8 * (v22 + 1LL) + qword_609238), &v26)
              && stat_buf.st_dev == v26.st_dev
              && stat_buf.st_ino == v26.st_ino;
        }
LABEL_68:
        v13 = *(_QWORD *)(8LL * v22 + qword_609238);
        v14 = gettext("unknown binary operator");
        sub_40165F(v14, v13);
      }
      if ( *(_BYTE *)(*(_QWORD *)(8LL * v22 + qword_609238) + 2LL) != 116
        || *(_BYTE *)(*(_QWORD *)(8LL * v22 + qword_609238) + 3LL) )
      {
        goto LABEL_68;
      }
      dword_609230 += 3;
      if ( a1 || v15 )
      {
        v11 = gettext("-ot does not accept -l");
        sub_40165F(v11, 0LL);
      }
      v19 = sub_4018A2(*(char **)(8LL * v22 - 8 + qword_609238), (__int64 *)&stat_buf);
      v12 = sub_4018A2(*(char **)(8 * (v22 + 1LL) + qword_609238), (__int64 *)&v26)
         && (!v19 || (int)sub_4014D5(stat_buf.st_dev, stat_buf.st_ino, v26.st_dev, v26.st_ino) < 0);
      result = v12;
    }
  }
  else if ( **(_BYTE **)(8LL * v22 + qword_609238) != 61
         || *(_BYTE *)(*(_QWORD *)(8LL * v22 + qword_609238) + 1LL)
         && (*(_BYTE *)(*(_QWORD *)(8LL * v22 + qword_609238) + 1LL) != 61
          || *(_BYTE *)(*(_QWORD *)(8LL * v22 + qword_609238) + 2LL)) )
  {
    if ( strcmp(*(const char **)(8LL * v22 + qword_609238), "!=") )
      abort();
    v21 = strcmp(
            *(const char **)(8LL * dword_609230 + qword_609238),
            *(const char **)(8 * (dword_609230 + 2LL) + qword_609238)) != 0;
    dword_609230 += 3;
    result = v21;
  }
  else
  {
    v20 = strcmp(
            *(const char **)(8LL * dword_609230 + qword_609238),
            *(const char **)(8 * (dword_609230 + 2LL) + qword_609238)) == 0;
    dword_609230 += 3;
    result = v20;
  }
  return result;
}
