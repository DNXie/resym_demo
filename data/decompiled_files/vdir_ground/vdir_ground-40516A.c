#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_40516A(char *a1, char *a2, unsigned __int8 a3)
{
  char *v3; // rax
  unsigned int v4; // eax
  char *v5; // rax
  __int64 v6; // rbx
  char *v7; // rax
  char *v8; // rax
  int v9; // eax
  char *v10; // rsi
  char *v11; // rsi
  unsigned int v14; // [rsp+2Ch] [rbp-394h]
  int fildes; // [rsp+30h] [rbp-390h]
  __int64 v16; // [rsp+40h] [rbp-380h]
  DIR *dirp; // [rsp+48h] [rbp-378h]
  char *v18; // [rsp+58h] [rbp-368h]
  struct dirent *v19; // [rsp+70h] [rbp-350h]
  const char *s; // [rsp+78h] [rbp-348h]
  char *sa; // [rsp+78h] [rbp-348h]
  struct stat stat_buf; // [rsp+80h] [rbp-340h] BYREF
  char v23[664]; // [rsp+110h] [rbp-2B0h] BYREF
  unsigned __int64 v24; // [rsp+3A8h] [rbp-18h]

  v24 = __readfsqword(0x28u);
  v16 = 0LL;
  *__errno_location() = 0;
  dirp = opendir(a1);
  if ( dirp )
  {
    if ( qword_61D620 )
    {
      fildes = dirfd(dirp);
      if ( fildes < 0 )
        v4 = (unsigned int)sub_415C20(a1, &stat_buf) >> 31;
      else
        v4 = (unsigned int)sub_415C30(fildes, &stat_buf) >> 31;
      if ( (_BYTE)v4 )
      {
        v5 = gettext("cannot determine device and inode of %s");
        sub_405087(a3, v5, (__int64)a1);
        closedir(dirp);
        return __readfsqword(0x28u) ^ v24;
      }
      if ( sub_402BA2(stat_buf.st_dev, stat_buf.st_ino) )
      {
        v6 = sub_4113BF(a1);
        v7 = gettext("%s: not listing already-listed directory");
        error(0, 0, v7, v6);
        closedir(dirp);
        sub_405056(1u);
        return __readfsqword(0x28u) ^ v24;
      }
      if ( stru_61D8C0.chunk_limit - stru_61D8C0.next_free < 16 )
        _obstack_newchunk(&stru_61D8C0, 16);
      stru_61D8C0.next_free += 16;
      v18 = stru_61D8C0.next_free - 16;
      *((_QWORD *)stru_61D8C0.next_free - 1) = stat_buf.st_dev;
      *(_QWORD *)v18 = stat_buf.st_ino;
    }
    if ( byte_61D6E0 || byte_61D718 )
    {
      if ( byte_61D530 != 1 )
      {
        putchar_unlocked(10);
        ++qword_61D7E0;
      }
      byte_61D530 = 0;
      if ( byte_61D6B8 )
      {
        fwrite_unlocked("  ", 1uLL, 2uLL, stdout);
        qword_61D7E0 += 2LL;
      }
      if ( byte_61D6B8 )
      {
        if ( stru_61D860.next_free + 8 > stru_61D860.chunk_limit )
          _obstack_newchunk(&stru_61D860, 8);
        memcpy(stru_61D860.next_free, &qword_61D7E0, 8uLL);
        stru_61D860.next_free += 8;
      }
      if ( a2 )
        v8 = a2;
      else
        v8 = a1;
      qword_61D7E0 += sub_4092DE(stdout, v8, qword_61D708, 0LL);
      if ( byte_61D6B8 )
      {
        if ( stru_61D860.next_free + 8 > stru_61D860.chunk_limit )
          _obstack_newchunk(&stru_61D860, 8);
        memcpy(stru_61D860.next_free, &qword_61D7E0, 8uLL);
        stru_61D860.next_free += 8;
      }
      fwrite_unlocked(":\n", 1uLL, 2uLL, stdout);
      qword_61D7E0 += 2LL;
    }
    sub_405AE7();
    do
    {
      while ( 1 )
      {
        *__errno_location() = 0;
        v19 = readdir(dirp);
        if ( !v19 )
          break;
        if ( (unsigned __int8)sub_405A26(v19->d_name) != 1 )
        {
          v14 = 0;
          v9 = v19->d_type;
          if ( v9 == 6 )
          {
            v14 = 4;
          }
          else if ( v19->d_type > 6u )
          {
            if ( v9 == 10 )
            {
              v14 = 6;
            }
            else if ( v19->d_type > 0xAu )
            {
              if ( v9 == 12 )
              {
                v14 = 7;
              }
              else if ( v9 == 14 )
              {
                v14 = 8;
              }
            }
            else if ( v9 == 8 )
            {
              v14 = 5;
            }
          }
          else
          {
            switch ( v9 )
            {
              case 2:
                v14 = 2;
                break;
              case 4:
                v14 = 3;
                break;
              case 1:
                v14 = 1;
                break;
            }
          }
          v16 += sub_405BE1(v19->d_name, v14, 0LL, 0LL, a1);
          if ( dword_61D69C == 1 && dword_61D6A4 == -1 && byte_61D6AB != 1 && byte_61D6E0 != 1 )
          {
            sub_4080A9();
            sub_4081E3();
            sub_405AE7();
          }
        }
      }
      if ( !*__errno_location() )
        break;
      v10 = gettext("reading directory %s");
      sub_405087(a3, v10, (__int64)a1);
    }
    while ( *__errno_location() == 75 );
    if ( closedir(dirp) )
    {
      v11 = gettext("closing directory %s");
      sub_405087(a3, v11, (__int64)a1);
    }
    sub_4080A9();
    if ( byte_61D6E0 )
      sub_406A50(a1, a3);
    if ( !dword_61D69C || byte_61D6AB )
    {
      if ( byte_61D6B8 )
      {
        fwrite_unlocked("  ", 1uLL, 2uLL, stdout);
        qword_61D7E0 += 2LL;
      }
      s = gettext("total");
      fputs_unlocked(s, stdout);
      qword_61D7E0 += strlen(s);
      putchar_unlocked(32);
      ++qword_61D7E0;
      sa = (char *)sub_40DD65(v16, v23, (unsigned int)dword_61D6AC, 512LL, qword_61D6B0);
      fputs_unlocked(sa, stdout);
      qword_61D7E0 += strlen(sa);
      putchar_unlocked(10);
      ++qword_61D7E0;
    }
    if ( qword_61D638 )
      sub_4081E3();
  }
  else
  {
    v3 = gettext("cannot open directory %s");
    sub_405087(a3, v3, (__int64)a1);
  }
  return __readfsqword(0x28u) ^ v24;
}
