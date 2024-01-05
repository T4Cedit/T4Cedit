
// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the T4CEDITOREXT_EXPORTS
// symbol defined on the command line. this symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// T4CEDITOREXT_API functions as being imported from a DLL, wheras this DLL sees symbols
// defined with this macro as being exported.

#ifdef T4CEDITOREXT_EXPORTS
#define T4CEDITOREXT_API __declspec(dllexport)
#else
#define T4CEDITOREXT_API __declspec(dllimport)
#endif

const unsigned int kFEATURE_01 = 0x00000001;  // 0000 0000 0000 0000  0000 0000 0000 0001
const unsigned int kFEATURE_02 = 0x00000002;  // 0000 0000 0000 0000  0000 0000 0000 0010
const unsigned int kFEATURE_03 = 0x00000004;  // 0000 0000 0000 0000  0000 0000 0000 0100
const unsigned int kFEATURE_04 = 0x00000008;  // 0000 0000 0000 0000  0000 0000 0000 1000
const unsigned int kFEATURE_05 = 0x00000010;  // 0000 0000 0000 0000  0000 0000 0001 0000
const unsigned int kFEATURE_06 = 0x00000020;  // 0000 0000 0000 0000  0000 0000 0010 0000
const unsigned int kFEATURE_07 = 0x00000040;  // 0000 0000 0000 0000  0000 0000 0100 0000
const unsigned int kFEATURE_08 = 0x00000080;  // 0000 0000 0000 0000  0000 0000 1000 0000
const unsigned int kFEATURE_09 = 0x00000100;  // 0000 0000 0000 0000  0000 0001 0000 0000
const unsigned int kFEATURE_10 = 0x00000200;  // 0000 0000 0000 0000  0000 0010 0000 0000
const unsigned int kFEATURE_11 = 0x00000400;  // 0000 0000 0000 0000  0000 0100 0000 0000
const unsigned int kFEATURE_12 = 0x00000800;  // 0000 0000 0000 0000  0000 1000 0000 0000
const unsigned int kFEATURE_13 = 0x00001000;  // 0000 0000 0000 0000  0001 0000 0000 0000
const unsigned int kFEATURE_14 = 0x00002000;  // 0000 0000 0000 0000  0010 0000 0000 0000
const unsigned int kFEATURE_15 = 0x00004000;  // 0000 0000 0000 0000  0100 0000 0000 0000
const unsigned int kFEATURE_16 = 0x00008000;  // 0000 0000 0000 0000  1000 0000 0000 0000
const unsigned int kFEATURE_17 = 0x00010000;  // 0000 0000 0000 0001  0000 0000 0000 0000 
const unsigned int kFEATURE_18 = 0x00020000;  // 0000 0000 0000 0010  0000 0000 0000 0000 
const unsigned int kFEATURE_19 = 0x00040000;  // 0000 0000 0000 0100  0000 0000 0000 0000 
const unsigned int kFEATURE_20 = 0x00080000;  // 0000 0000 0000 1000  0000 0000 0000 0000 
const unsigned int kFEATURE_21 = 0x00100000;  // 0000 0000 0001 0000  0000 0000 0000 0000 
const unsigned int kFEATURE_22 = 0x00200000;  // 0000 0000 0010 0000  0000 0000 0000 0000 
const unsigned int kFEATURE_23 = 0x00400000;  // 0000 0000 0100 0000  0000 0000 0000 0000 
const unsigned int kFEATURE_24 = 0x00800000;  // 0000 0000 1000 0000  0000 0000 0000 0000 
const unsigned int kFEATURE_25 = 0x01000000;  // 0000 0001 0000 0000  0000 0000 0000 0000 
const unsigned int kFEATURE_26 = 0x02000000;  // 0000 0010 0000 0000  0000 0000 0000 0000 
const unsigned int kFEATURE_27 = 0x04000000;  // 0000 0100 0000 0000  0000 0000 0000 0000 
const unsigned int kFEATURE_28 = 0x08000000;  // 0000 1000 0000 0000  0000 0000 0000 0000 
const unsigned int kFEATURE_29 = 0x10000000;  // 0001 0000 0000 0000  0000 0000 0000 0000 
const unsigned int kFEATURE_30 = 0x20000000;  // 0010 0000 0000 0000  0000 0000 0000 0000 
const unsigned int kFEATURE_31 = 0x40000000;  // 0100 0000 0000 0000  0000 0000 0000 0000 
const unsigned int kFEATURE_32 = 0x80000000;  // 1000 0000 0000 0000  0000 0000 0000 0000 

// This class is exported from the T4C EditorExt.dll
class T4CEDITOREXT_API CT4CEditorExt {
public:
	CT4CEditorExt(void);
	// TODO: add your methods here.
};

extern T4CEDITOREXT_API int nT4CEditorExt;

T4CEDITOREXT_API int  fnRetreiveSN(char *pstrSN);
T4CEDITOREXT_API BOOL fnValidLicence(char *pstrKey, char *pstrSerial, unsigned int kFeature);



