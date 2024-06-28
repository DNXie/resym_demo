#include "/share/binary_recovery/clang-parser/defs.hh"
char *__fastcall sub_40BC6C(char *a1, unsigned int a2, const char *a3)
{
  char *result; // rax
  int v4; // eax
  int fd; // [rsp+2Ch] [rbp-54h]
  char *v7; // [rsp+30h] [rbp-50h]
  size_t size; // [rsp+38h] [rbp-48h]
  char s[40]; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v10; // [rsp+68h] [rbp-18h]

  v10 = __readfsqword(0x28u);
  if ( *a3 )
  {
    if ( !dword_6104C4 )
    {
      fd = open("/proc/self/fd", 67840);
      if ( fd >= 0 )
      {
        sprintf(s, "/proc/self/fd/%d/%s", (unsigned int)fd, "../fd");
        if ( access(s, 0) )
          v4 = -1;
        else
          v4 = 1;
        dword_6104C4 = v4;
        close(fd);
      }
      else
      {
        dword_6104C4 = -1;
      }
    }
    if ( dword_6104C4 >= 0 )
    {
      size = strlen(a3) + 27;
      v7 = a1;
      if ( size <= 0xFC0 || (v7 = (char *)malloc(size)) != 0LL )
      {
        sprintf(v7, "/proc/self/fd/%d/%s", a2, a3);
        result = v7;
      }
      else
      {
        result = 0LL;
      }
    }
    else
    {
      result = 0LL;
    }
  }
  else
  {
    *a1 = 0;
    result = a1;
  }
  return result;
}
