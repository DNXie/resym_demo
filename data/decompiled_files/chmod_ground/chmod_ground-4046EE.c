#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_4046EE()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_60E260;
  for ( i = 1; i < dword_60E240; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_60E380 )
  {
    free(ptr[1]);
    qword_60E250 = 256LL;
    off_60E258 = &unk_60E380;
  }
  if ( ptr != (void **)&qword_60E250 )
  {
    free(ptr);
    off_60E260 = &qword_60E250;
  }
  dword_60E240 = 1;
}
