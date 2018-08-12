/**
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER within this package.
 */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION (WINAPI_PARTITION_DESKTOP)

#ifdef RC_INVOKED
#define _HRESULT_TYPEDEF_(_sc) _sc
#else
#define _HRESULT_TYPEDEF_(_sc) ((HRESULT)_sc)
#endif

#define FACILITY_NULL 0
#define FACILITY_RPC 1
#define FACILITY_DISPATCH 2
#define FACILITY_STORAGE 3
#define FACILITY_ITF 4
#define FACILITY_WIN32 7
#define FACILITY_WINDOWS 8
#define FACILITY_SSPI 9
#define FACILITY_CONTROL 10

#define E_ADS_BAD_PATHNAME _HRESULT_TYPEDEF_(0x80005000)
#define E_ADS_INVALID_DOMAIN_OBJECT _HRESULT_TYPEDEF_(0x80005001)
#define E_ADS_INVALID_USER_OBJECT _HRESULT_TYPEDEF_(0x80005002)
#define E_ADS_INVALID_COMPUTER_OBJECT _HRESULT_TYPEDEF_(0x80005003)
#define E_ADS_UNKNOWN_OBJECT _HRESULT_TYPEDEF_(0x80005004)
#define E_ADS_PROPERTY_NOT_SET _HRESULT_TYPEDEF_(0x80005005)
#define E_ADS_PROPERTY_NOT_SUPPORTED _HRESULT_TYPEDEF_(0x80005006)
#define E_ADS_PROPERTY_INVALID _HRESULT_TYPEDEF_(0x80005007)
#define E_ADS_BAD_PARAMETER _HRESULT_TYPEDEF_(0x80005008)
#define E_ADS_OBJECT_UNBOUND _HRESULT_TYPEDEF_(0x80005009)
#define E_ADS_PROPERTY_NOT_MODIFIED _HRESULT_TYPEDEF_(0x8000500a)
#define E_ADS_PROPERTY_MODIFIED _HRESULT_TYPEDEF_(0x8000500b)
#define E_ADS_CANT_CONVERT_DATATYPE _HRESULT_TYPEDEF_(0x8000500c)
#define E_ADS_PROPERTY_NOT_FOUND _HRESULT_TYPEDEF_(0x8000500d)
#define E_ADS_OBJECT_EXISTS _HRESULT_TYPEDEF_(0x8000500e)
#define E_ADS_SCHEMA_VIOLATION _HRESULT_TYPEDEF_(0x8000500f)
#define E_ADS_COLUMN_NOT_SET _HRESULT_TYPEDEF_(0x80005010)
#define S_ADS_ERRORSOCCURRED _HRESULT_TYPEDEF_(0x00005011)
#define S_ADS_NOMORE_ROWS _HRESULT_TYPEDEF_(0x00005012)
#define S_ADS_NOMORE_COLUMNS _HRESULT_TYPEDEF_(0x00005013)
#define E_ADS_INVALID_FILTER _HRESULT_TYPEDEF_(0x80005014)

#endif