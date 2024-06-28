#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_4060EA()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_60A220;
  for ( i = 1; i < dword_60A200; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_60A300 )
  {
    free(ptr[1]);
    qword_60A210 = 256LL;
    off_60A218 = &unk_60A300;
  }
  if ( ptr != (void **)&qword_60A210 )
  {
    free(ptr);
    off_60A220 = &qword_60A210;
  }
  dword_60A200 = 1;
}
