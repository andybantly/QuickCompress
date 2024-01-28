// Huffman.h : Declaration of the CHuffman

#ifndef __HUFFMAN_H_
#define __HUFFMAN_H_

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CHuffman
class ATL_NO_VTABLE CHuffman : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CHuffman, &CLSID_Huffman>,
	public IDispatchImpl<IHuffman, &IID_IHuffman, &LIBID_QUICKCOMPRESSLib>
{
public:
	CHuffman();
   ~CHuffman();

protected:
   // Implementation
   DWORD Compress(BYTE *pInput,DWORD dwCount,WORD iTreeSize,DWORD *pByteTree,DWORD *pCodes,BYTE *pOutput);
   DWORD UnCompress(BYTE *pInput,BYTE *pOutput);
   DWORD CountCompress(BYTE *pInput,DWORD dwCount,WORD iTreeSize,DWORD *pCodes);
   WORD Dictionary(BYTE *pInput,DWORD dwCount,DWORD *pByteTree,DWORD *pCodes);
   DWORD GetSize(BYTE *pInput);

   // Internal: do not use
   void InitArrays();
   void BuildArrays();
   void BuildByteTree();
   void BuildCodes();
   void QuickSortA(DWORD *pArray1,DWORD *pArray2,int iFirst,int iLast);
   void QuickSortD(DWORD *pArray1,DWORD *pArray2,int iFirst,int iLast);
   void D2W(void* dest,void* src,DWORD count);
   void W2D(void* dest,void* src,DWORD count);
   void MemoryCopy(void* pDest,void* pSrc,DWORD dwCount);

public:
DECLARE_REGISTRY_RESOURCEID(IDR_HUFFMAN)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CHuffman)
	COM_INTERFACE_ENTRY(IHuffman)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

// IHuffman
public:
	STDMETHOD(Uncompress)(BYTE* pByteBufferIn, BYTE** ppByteBufferOut);
	STDMETHOD(Compress)(BYTE* pByteBufferIn, BYTE** ppByteBufferOut);
};

#endif //__HUFFMAN_H_
