use ExtUtils::MakeMaker;

sub MY::post_constants {
	'include ../../../Makefile.defines_int';
}

WriteMakefile('NAME' => 'Irssi::Silc',
	      'LIBS' => '',
	      'OBJECT' => '$(O_FILES)',
	      'TYPEMAPS' => ['../common/typemap'],
	      'INC' => '-I../../.. -I../../../src -I../../../src/core -I../../../src/silc/core -I../../../src/silc -I$(silc_top_srcdir) -I$(silc_top_srcdir)/lib/silccore -I$(silc_top_srcdir)/lib/silccrypt -I$(silc_top_srcdir)/lib/silcmath -DHAVE_SILCDEFS_H -I$(silc_top_srcdir)/lib/silcske -I$(silc_top_srcdir)/lib/silcsim -I$(silc_top_srcdir)/lib/silcskr -I$(silc_top_srcdir)/lib/silchttp -I$(silc_top_srcdir)/lib/silcasn1 -I$(silc_top_srcdir)/lib/silcapputil -I$(silc_top_srcdir)/lib/silcvcard -I$(silc_top_srcdir)/lib/silcutil -I$(silc_top_srcdir)/lib/silcsftp -I$(silc_top_srcdir)/lib/silcclient -I$(silc_top_srcdir)/lib/contrib -I$(silc_top_srcdir)/includes -I$(silc_top_srcdir)/doc -pthread -I/usr/include/glib-2.0 -I/usr/lib/glib-2.0/include  ',
	      'VERSION_FROM' => './Silc.pm');
