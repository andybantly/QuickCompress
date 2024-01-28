// RunLength.h : Declaration of the CRunLength

#ifndef __RUNLENGTH_H_
#define __RUNLENGTH_H_

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CRunLength
class ATL_NO_VTABLE CRunLength : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CRunLength, &CLSID_RunLength>,
	public ISupportErrorInfo,
	public IDispatchImpl<IRunLength, &IID_IRunLength, &LIBID_QUICKCOMPRESSLib>
{
public:
   CRunLength(){};
   ~CRunLength(){};

DECLARE_REGISTRY_RESOURCEID(IDR_RUNLENGTH)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CRunLength)
	COM_INTERFACE_ENTRY(IRunLength)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

protected:
   DWORD	EncodedRunLength(BYTE *pInput,DWORD dwCount);
   DWORD	RunLengthEncode(BYTE *pInput,DWORD dwCount,BYTE *pOutput);
   DWORD	DecodedRunLength(BYTE *pInput);
   DWORD	RunLengthDecode(BYTE *pInput,BYTE *pOutput);

// IRunLength
public:
	STDMETHOD(Decode)(BYTE* pByteBufferIn, UINT nbByteBufferIn, BYTE** ppByteBufferOut, UINT* pnbByteBufferOut);
	STDMETHOD(Encode)(BYTE* pByteBufferIn, UINT nbByteBufferIn, BYTE** ppByteBufferOut, UINT* pnbByteBufferOut);
};

#endif //__RUNLENGTH_H_
