#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_403E4C()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_60E250;
  for ( i = 1; i < dword_60E230; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_60E320 )
  {
    free(ptr[1]);
    qword_60E240 = 256LL;
    off_60E248 = &unk_60E320;
  }
  if ( ptr != (void **)&qword_60E240 )
  {
    free(ptr);
    off_60E250 = &qword_60E240;
  }
  dword_60E230 = 1;
}
