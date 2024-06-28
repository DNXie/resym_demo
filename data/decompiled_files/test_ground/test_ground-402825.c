#include "/share/binary_recovery/clang-parser/defs.hh"
bool sub_402825()
{
  int v0; // eax
  bool result; // al
  bool v2; // al
  bool v3; // al
  bool v7; // al
  bool v8; // al
  bool v9; // al
  bool v10; // al
  bool v12; // al
  bool v15; // al
  char *nptr; // [rsp+0h] [rbp-A0h]
  __int64 fd; // [rsp+8h] [rbp-98h]
  struct stat stat_buf; // [rsp+10h] [rbp-90h] BYREF

  v0 = *(char *)(*(_QWORD *)(8LL * dword_609230 + qword_609238) + 1LL);
  if ( v0 == 103 )
  {
    sub_401717();
    return !(unsigned int)sub_406010(*(char **)(8LL * dword_609230 - 8 + qword_609238), &stat_buf)
        && (stat_buf.st_mode & 0x400) != 0;
  }
  if ( v0 <= 103 )
  {
    if ( v0 != 97 )
    {
      if ( v0 <= 97 )
      {
        if ( v0 != 76 )
        {
          if ( v0 > 76 )
          {
            if ( v0 == 79 )
            {
              sub_401717();
              v2 = !(unsigned int)sub_406010(*(char **)(8LL * dword_609230 - 8 + qword_609238), &stat_buf)
                && geteuid() == stat_buf.st_uid;
              result = v2;
            }
            else
            {
              if ( v0 != 83 )
                return 0;
              sub_401717();
              v7 = !(unsigned int)sub_406010(*(char **)(8LL * dword_609230 - 8 + qword_609238), &stat_buf)
                && (stat_buf.st_mode & 0xF000) == 49152;
              result = v7;
            }
          }
          else
          {
            if ( v0 != 71 )
              return 0;
            sub_401717();
            v3 = !(unsigned int)sub_406010(*(char **)(8LL * dword_609230 - 8 + qword_609238), &stat_buf)
              && getegid() == stat_buf.st_gid;
            result = v3;
          }
          return result;
        }
LABEL_85:
        sub_401717();
        return !(unsigned int)sub_406020(*(char **)(8LL * dword_609230 - 8 + qword_609238), &stat_buf)
            && (stat_buf.st_mode & 0xF000) == 40960;
      }
      if ( v0 == 100 )
      {
        sub_401717();
        return !(unsigned int)sub_406010(*(char **)(8LL * dword_609230 - 8 + qword_609238), &stat_buf)
            && (stat_buf.st_mode & 0xF000) == 0x4000;
      }
      if ( v0 <= 100 )
      {
        if ( v0 == 98 )
        {
          sub_401717();
          v9 = !(unsigned int)sub_406010(*(char **)(8LL * dword_609230 - 8 + qword_609238), &stat_buf)
            && (stat_buf.st_mode & 0xF000) == 24576;
          result = v9;
        }
        else
        {
          sub_401717();
          v8 = !(unsigned int)sub_406010(*(char **)(8LL * dword_609230 - 8 + qword_609238), &stat_buf)
            && (stat_buf.st_mode & 0xF000) == 0x2000;
          result = v8;
        }
        return result;
      }
      if ( v0 != 101 )
      {
        sub_401717();
        return !(unsigned int)sub_406010(*(char **)(8LL * dword_609230 - 8 + qword_609238), &stat_buf)
            && (stat_buf.st_mode & 0xF000) == 0x8000;
      }
    }
    sub_401717();
    return (unsigned int)sub_406010(*(char **)(8LL * dword_609230 - 8 + qword_609238), &stat_buf) == 0;
  }
  if ( v0 == 115 )
  {
    sub_401717();
    return !(unsigned int)sub_406010(*(char **)(8LL * dword_609230 - 8 + qword_609238), &stat_buf)
        && stat_buf.st_size > 0;
  }
  if ( v0 <= 115 )
  {
    if ( v0 == 110 )
    {
      sub_401717();
      return **(_BYTE **)(8LL * dword_609230 - 8 + qword_609238) != 0;
    }
    if ( v0 > 110 )
    {
      if ( v0 == 112 )
      {
        sub_401717();
        v10 = !(unsigned int)sub_406010(*(char **)(8LL * dword_609230 - 8 + qword_609238), &stat_buf)
           && (stat_buf.st_mode & 0xF000) == 4096;
        result = v10;
      }
      else
      {
        if ( v0 != 114 )
          return 0;
        sub_401717();
        result = euidaccess(*(const char **)(8LL * dword_609230 - 8 + qword_609238), 4) == 0;
      }
      return result;
    }
    if ( v0 != 104 )
    {
      if ( v0 != 107 )
        return 0;
      sub_401717();
      return !(unsigned int)sub_406010(*(char **)(8LL * dword_609230 - 8 + qword_609238), &stat_buf)
          && (stat_buf.st_mode & 0x200) != 0;
    }
    goto LABEL_85;
  }
  if ( v0 == 119 )
  {
    sub_401717();
    result = euidaccess(*(const char **)(8LL * dword_609230 - 8 + qword_609238), 2) == 0;
  }
  else if ( v0 > 119 )
  {
    if ( v0 == 120 )
    {
      sub_401717();
      result = euidaccess(*(const char **)(8LL * dword_609230 - 8 + qword_609238), 1) == 0;
    }
    else
    {
      if ( v0 != 122 )
        return 0;
      sub_401717();
      result = **(_BYTE **)(8LL * dword_609230 - 8 + qword_609238) == 0;
    }
  }
  else if ( v0 == 116 )
  {
    sub_401717();
    nptr = (char *)sub_40177D(*(unsigned __int8 **)(8LL * dword_609230 - 8 + qword_609238));
    *__errno_location() = 0;
    fd = strtol(nptr, 0LL, 10);
    v15 = *__errno_location() != 34 && fd >= 0 && fd <= 0x7FFFFFFF && isatty(fd);
    result = v15;
  }
  else
  {
    if ( v0 != 117 )
      return 0;
    sub_401717();
    v12 = !(unsigned int)sub_406010(*(char **)(8LL * dword_609230 - 8 + qword_609238), &stat_buf)
       && (stat_buf.st_mode & 0x800) != 0;
    result = v12;
  }
  return result;
}
