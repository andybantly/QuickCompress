

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 21:14:07 2038
 */
/* Compiler settings for QuickCompress.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0628 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __QuickCompress_h__
#define __QuickCompress_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if defined(_CONTROL_FLOW_GUARD_XFG)
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __IHuffman_FWD_DEFINED__
#define __IHuffman_FWD_DEFINED__
typedef interface IHuffman IHuffman;

#endif 	/* __IHuffman_FWD_DEFINED__ */


#ifndef __IRunLength_FWD_DEFINED__
#define __IRunLength_FWD_DEFINED__
typedef interface IRunLength IRunLength;

#endif 	/* __IRunLength_FWD_DEFINED__ */


#ifndef __IArithmeticEncoding_FWD_DEFINED__
#define __IArithmeticEncoding_FWD_DEFINED__
typedef interface IArithmeticEncoding IArithmeticEncoding;

#endif 	/* __IArithmeticEncoding_FWD_DEFINED__ */


#ifndef __Huffman_FWD_DEFINED__
#define __Huffman_FWD_DEFINED__

#ifdef __cplusplus
typedef class Huffman Huffman;
#else
typedef struct Huffman Huffman;
#endif /* __cplusplus */

#endif 	/* __Huffman_FWD_DEFINED__ */


#ifndef __RunLength_FWD_DEFINED__
#define __RunLength_FWD_DEFINED__

#ifdef __cplusplus
typedef class RunLength RunLength;
#else
typedef struct RunLength RunLength;
#endif /* __cplusplus */

#endif 	/* __RunLength_FWD_DEFINED__ */


#ifndef __ArithmeticEncoding_FWD_DEFINED__
#define __ArithmeticEncoding_FWD_DEFINED__

#ifdef __cplusplus
typedef class ArithmeticEncoding ArithmeticEncoding;
#else
typedef struct ArithmeticEncoding ArithmeticEncoding;
#endif /* __cplusplus */

#endif 	/* __ArithmeticEncoding_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IHuffman_INTERFACE_DEFINED__
#define __IHuffman_INTERFACE_DEFINED__

/* interface IHuffman */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IHuffman;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0C4C5E98-AA2C-4D62-93FA-0ACB9787CC8C")
    IHuffman : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Compress( 
            BYTE *pByteBufferIn,
            BYTE **ppByteBufferOut) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Uncompress( 
            BYTE *pByteBufferIn,
            BYTE **ppByteBufferOut) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IHuffmanVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IHuffman * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IHuffman * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IHuffman * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IHuffman * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IHuffman * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IHuffman * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IHuffman * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IHuffman, Compress)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Compress )( 
            IHuffman * This,
            BYTE *pByteBufferIn,
            BYTE **ppByteBufferOut);
        
        DECLSPEC_XFGVIRT(IHuffman, Uncompress)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Uncompress )( 
            IHuffman * This,
            BYTE *pByteBufferIn,
            BYTE **ppByteBufferOut);
        
        END_INTERFACE
    } IHuffmanVtbl;

    interface IHuffman
    {
        CONST_VTBL struct IHuffmanVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IHuffman_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IHuffman_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IHuffman_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IHuffman_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IHuffman_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IHuffman_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IHuffman_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IHuffman_Compress(This,pByteBufferIn,ppByteBufferOut)	\
    ( (This)->lpVtbl -> Compress(This,pByteBufferIn,ppByteBufferOut) ) 

#define IHuffman_Uncompress(This,pByteBufferIn,ppByteBufferOut)	\
    ( (This)->lpVtbl -> Uncompress(This,pByteBufferIn,ppByteBufferOut) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IHuffman_INTERFACE_DEFINED__ */


#ifndef __IRunLength_INTERFACE_DEFINED__
#define __IRunLength_INTERFACE_DEFINED__

/* interface IRunLength */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IRunLength;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4AA929FA-419E-4DA3-B898-9B6B2D62CA87")
    IRunLength : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Encode( 
            BYTE *pByteBufferIn,
            UINT nbByteBufferIn,
            BYTE **ppByteBufferOut,
            UINT *pnbByteBufferOut) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Decode( 
            BYTE *pByteBufferIn,
            UINT nbByteBufferIn,
            BYTE **ppByteBufferOut,
            UINT *pnbByteBufferOut) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRunLengthVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRunLength * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRunLength * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRunLength * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRunLength * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRunLength * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRunLength * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRunLength * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IRunLength, Encode)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Encode )( 
            IRunLength * This,
            BYTE *pByteBufferIn,
            UINT nbByteBufferIn,
            BYTE **ppByteBufferOut,
            UINT *pnbByteBufferOut);
        
        DECLSPEC_XFGVIRT(IRunLength, Decode)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Decode )( 
            IRunLength * This,
            BYTE *pByteBufferIn,
            UINT nbByteBufferIn,
            BYTE **ppByteBufferOut,
            UINT *pnbByteBufferOut);
        
        END_INTERFACE
    } IRunLengthVtbl;

    interface IRunLength
    {
        CONST_VTBL struct IRunLengthVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRunLength_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRunLength_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRunLength_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRunLength_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRunLength_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRunLength_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRunLength_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IRunLength_Encode(This,pByteBufferIn,nbByteBufferIn,ppByteBufferOut,pnbByteBufferOut)	\
    ( (This)->lpVtbl -> Encode(This,pByteBufferIn,nbByteBufferIn,ppByteBufferOut,pnbByteBufferOut) ) 

#define IRunLength_Decode(This,pByteBufferIn,nbByteBufferIn,ppByteBufferOut,pnbByteBufferOut)	\
    ( (This)->lpVtbl -> Decode(This,pByteBufferIn,nbByteBufferIn,ppByteBufferOut,pnbByteBufferOut) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRunLength_INTERFACE_DEFINED__ */


#ifndef __IArithmeticEncoding_INTERFACE_DEFINED__
#define __IArithmeticEncoding_INTERFACE_DEFINED__

/* interface IArithmeticEncoding */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IArithmeticEncoding;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DF9D9093-0A42-4534-9998-A82E8BDA29EC")
    IArithmeticEncoding : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Encode( 
            BYTE *pByteBufferIn,
            BYTE **ppByteBufferOut) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Decode( 
            BYTE *pByteBufferIn,
            BYTE **ppByteBufferOut) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IArithmeticEncodingVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IArithmeticEncoding * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IArithmeticEncoding * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IArithmeticEncoding * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IArithmeticEncoding * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IArithmeticEncoding * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IArithmeticEncoding * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IArithmeticEncoding * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IArithmeticEncoding, Encode)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Encode )( 
            IArithmeticEncoding * This,
            BYTE *pByteBufferIn,
            BYTE **ppByteBufferOut);
        
        DECLSPEC_XFGVIRT(IArithmeticEncoding, Decode)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Decode )( 
            IArithmeticEncoding * This,
            BYTE *pByteBufferIn,
            BYTE **ppByteBufferOut);
        
        END_INTERFACE
    } IArithmeticEncodingVtbl;

    interface IArithmeticEncoding
    {
        CONST_VTBL struct IArithmeticEncodingVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IArithmeticEncoding_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IArithmeticEncoding_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IArithmeticEncoding_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IArithmeticEncoding_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IArithmeticEncoding_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IArithmeticEncoding_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IArithmeticEncoding_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IArithmeticEncoding_Encode(This,pByteBufferIn,ppByteBufferOut)	\
    ( (This)->lpVtbl -> Encode(This,pByteBufferIn,ppByteBufferOut) ) 

#define IArithmeticEncoding_Decode(This,pByteBufferIn,ppByteBufferOut)	\
    ( (This)->lpVtbl -> Decode(This,pByteBufferIn,ppByteBufferOut) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IArithmeticEncoding_INTERFACE_DEFINED__ */



#ifndef __QUICKCOMPRESSLib_LIBRARY_DEFINED__
#define __QUICKCOMPRESSLib_LIBRARY_DEFINED__

/* library QUICKCOMPRESSLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_QUICKCOMPRESSLib;

EXTERN_C const CLSID CLSID_Huffman;

#ifdef __cplusplus

class DECLSPEC_UUID("E418DC5F-41FE-426A-BE87-996E6188DF37")
Huffman;
#endif

EXTERN_C const CLSID CLSID_RunLength;

#ifdef __cplusplus

class DECLSPEC_UUID("02A37EE2-DFEC-4EBB-82BC-DD6577A7F721")
RunLength;
#endif

EXTERN_C const CLSID CLSID_ArithmeticEncoding;

#ifdef __cplusplus

class DECLSPEC_UUID("AAA064A8-BA1B-4B27-98BF-CFC6F4D76B22")
ArithmeticEncoding;
#endif
#endif /* __QUICKCOMPRESSLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


