#include "/share/binary_recovery/clang-parser/defs.hh"
bool __fastcall sub_4068B3(char *a1, struct stat *a2, char *a3, struct stat *a4, __int64 a5, _BYTE *a6, _BYTE *a7)
{
  bool v7; // al
  bool result; // al
  bool v9; // al
  bool v13; // [rsp+3Eh] [rbp-132h]
  struct stat *v14; // [rsp+40h] [rbp-130h]
  struct stat *v15; // [rsp+48h] [rbp-128h]
  struct stat v16; // [rsp+50h] [rbp-120h] BYREF
  struct stat stat_buf; // [rsp+E0h] [rbp-90h] BYREF

  v7 = a2->st_ino == a4->st_ino && a2->st_dev == a4->st_dev;
  *a6 = 0;
  *a7 = 0;
  if ( v7 && *(_BYTE *)(a5 + 23) )
  {
    *a6 = 1;
    return 1;
  }
  if ( *(_DWORD *)(a5 + 4) == 2 )
  {
    v13 = v7;
    if ( (a2->st_mode & 0xF000) == 40960 && (a4->st_mode & 0xF000) == 40960 )
      return (unsigned __int8)sub_40FC9A(a1, a3) == 0;
    v14 = a2;
    v15 = a4;
  }
  else
  {
    if ( !v7 )
      return 1;
    if ( (unsigned int)sub_416120(a3, &v16) || (unsigned int)sub_416120(a1, &stat_buf) )
      return 1;
    v14 = &stat_buf;
    v15 = &v16;
    v9 = stat_buf.st_ino == v16.st_ino && stat_buf.st_dev == v16.st_dev;
    v13 = v9;
    if ( (stat_buf.st_mode & 0xF000) == 40960 && (v16.st_mode & 0xF000) == 40960 && *(_BYTE *)(a5 + 21) )
      return 1;
  }
  if ( *(_DWORD *)a5 )
  {
    if ( !v13 )
      result = *(_BYTE *)(a5 + 24) == 1
            || *(_DWORD *)(a5 + 4) == 2
            || (v14->st_mode & 0xF000) != 40960
            || (v15->st_mode & 0xF000) == 40960;
    else
      result = (unsigned __int8)sub_40FC9A(a1, a3) == 0;
  }
  else
  {
    if ( !*(_BYTE *)(a5 + 24) && !*(_BYTE *)(a5 + 21) )
      goto LABEL_72;
    if ( (v15->st_mode & 0xF000) == 40960 )
      return 1;
    if ( v13 && v15->st_nlink > 1 && (unsigned __int8)sub_40FC9A(a1, a3) != 1 )
    {
      if ( *(_BYTE *)(a5 + 24) )
      {
        *a7 = 1;
        *a6 = 1;
      }
      result = 1;
    }
    else
    {
LABEL_72:
      if ( (v14->st_mode & 0xF000) != 40960 && (v15->st_mode & 0xF000) != 40960 )
      {
        if ( v14->st_ino != v15->st_ino || v14->st_dev != v15->st_dev )
          return 1;
        if ( *(_BYTE *)(a5 + 23) )
        {
          *a6 = 1;
          return 1;
        }
      }
      if ( *(_BYTE *)(a5 + 21) && (v15->st_mode & 0xF000) == 40960 )
        return v15->st_dev == v14->st_dev;
      if ( *(_DWORD *)(a5 + 4) != 2 )
        goto LABEL_69;
      if ( (v14->st_mode & 0xF000) == 40960 )
      {
        if ( (unsigned int)sub_416100(a1, &stat_buf) )
          return 1;
      }
      else
      {
        qmemcpy(&stat_buf, v14, sizeof(stat_buf));
      }
      if ( (v15->st_mode & 0xF000) == 40960 )
      {
        if ( (unsigned int)sub_416100(a3, &v16) )
          return 1;
      }
      else
      {
        qmemcpy(&v16, v15, sizeof(v16));
      }
      if ( stat_buf.st_ino != v16.st_ino || stat_buf.st_dev != v16.st_dev )
        return 1;
      if ( *(_BYTE *)(a5 + 23) )
      {
        *a6 = 1;
        result = 1;
      }
      else
      {
LABEL_69:
        result = 0;
      }
    }
  }
  return result;
}
