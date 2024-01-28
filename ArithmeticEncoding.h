// ArithmeticEncoding.h : Declaration of the CArithmeticEncoding

#pragma once
#include "resource.h"       // main symbols

#include "QuickCompress.h"


// CArithmeticEncoding

class ATL_NO_VTABLE CArithmeticEncoding : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CArithmeticEncoding, &CLSID_ArithmeticEncoding>,
	public IDispatchImpl<IArithmeticEncoding, &IID_IArithmeticEncoding, &LIBID_QUICKCOMPRESSLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CArithmeticEncoding()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_ARITHMETICENCODING)


BEGIN_COM_MAP(CArithmeticEncoding)
	COM_INTERFACE_ENTRY(IArithmeticEncoding)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()


	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}
	
	void FinalRelease() 
	{
	}

public:

	STDMETHOD(Encode)(BYTE* pByteBufferIn,BYTE** ppByteBufferOut);
	STDMETHOD(Decode)(BYTE* pByteBufferIn,BYTE** ppByteBufferOut);
};

OBJECT_ENTRY_AUTO(__uuidof(ArithmeticEncoding), CArithmeticEncoding)
