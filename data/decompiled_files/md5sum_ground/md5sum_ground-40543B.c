#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_40543B()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_609220;
  for ( i = 1; i < dword_609200; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_609300 )
  {
    free(ptr[1]);
    qword_609210 = 256LL;
    off_609218 = &unk_609300;
  }
  if ( ptr != (void **)&qword_609210 )
  {
    free(ptr);
    off_609220 = &qword_609210;
  }
  dword_609200 = 1;
}
