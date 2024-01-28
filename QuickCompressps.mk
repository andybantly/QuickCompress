
QuickCompressps.dll: dlldata.obj QuickCompress_p.obj QuickCompress_i.obj
	link /dll /out:QuickCompressps.dll /def:QuickCompressps.def /entry:DllMain dlldata.obj QuickCompress_p.obj QuickCompress_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del QuickCompressps.dll
	@del QuickCompressps.lib
	@del QuickCompressps.exp
	@del dlldata.obj
	@del QuickCompress_p.obj
	@del QuickCompress_i.obj
