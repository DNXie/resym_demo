#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_403C7F()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_60A280;
  for ( i = 1; i < dword_60A260; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_60A360 )
  {
    free(ptr[1]);
    qword_60A270 = 256LL;
    off_60A278 = &unk_60A360;
  }
  if ( ptr != (void **)&qword_60A270 )
  {
    free(ptr);
    off_60A280 = &qword_60A270;
  }
  dword_60A260 = 1;
}
