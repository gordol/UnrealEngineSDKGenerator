#pragma once

#include <type_traits>
#include <string>

enum class UEPropertyFlags : uint64_t
{
	Edit = 0x0000000000000001,
	Const = 0x0000000000000002,
	Input = 0x0000000000000004,
	ExportObject = 0x0000000000000008,
	OptionalParm = 0x0000000000000010,
	Net = 0x0000000000000020,
	EditFixedSize = 0x0000000000000040,
	Parm = 0x0000000000000080,
	OutParm = 0x0000000000000100,
	SkipParm = 0x0000000000000200,
	ReturnParm = 0x0000000000000400,
	CoerceParm = 0x0000000000000800,
	Native = 0x0000000000001000,
	Transient = 0x0000000000002000,
	Config = 0x0000000000004000,
	Localized = 0x0000000000008000,
	EditConst = 0x0000000000020000,
	GlobalConfig = 0x0000000000040000,
	Component = 0x0000000000080000,
	AlwaysInit = 0x0000000000100000,
	DuplicateTransient = 0x0000000000200000,
	NeedCtorLink = 0x0000000000400000,
	NoExport = 0x0000000000800000,
	NoImport = 0x0000000001000000,
	NoClear = 0x0000000002000000,
	EditInline = 0x0000000004000000,
	EditInlineUse = 0x0000000010000000,
	Deprecated = 0x0000000020000000,
	DataBinding = 0x0000000040000000,
	SerializeText = 0x0000000080000000,
	RepNotify = 0x0000000100000000,
	Interp = 0x0000000200000000,
	NonTransactional = 0x0000000400000000,
	EditorOnly = 0x0000000800000000,
	NotForConsole = 0x0000001000000000,
	RepRetry = 0x0000002000000000,
	PrivateWrite = 0x0000004000000000,
	ProtectedWrite = 0x0000008000000000,
	ArchetypeProperty = 0x0000010000000000,
	EditHide = 0x0000020000000000,
	EditTextBox = 0x0000040000000000,
	CrossLevelPassive = 0x0000100000000000,
	CrossLevelActive = 0x0000200000000000
};

inline bool operator&(UEPropertyFlags lhs, UEPropertyFlags rhs)
{
	return (static_cast<std::underlying_type_t<UEPropertyFlags>>(lhs) & static_cast<std::underlying_type_t<UEPropertyFlags>>(rhs)) == static_cast<std::underlying_type_t<UEPropertyFlags>>(rhs);
}

std::string StringifyFlags(const UEPropertyFlags flags);

enum class UEFunctionFlags : uint32_t
{
	Final = 0x00000001,
	Defined = 0x00000002,
	Iterator = 0x00000004,
	Latent = 0x00000008,
	PreOperator = 0x00000010,
	Singular = 0x00000020,
	Net = 0x00000040,
	NetReliable = 0x00000080,
	Simulated = 0x00000100,
	Exec = 0x00000200,
	Native = 0x00000400,
	Event = 0x00000800,
	Operator = 0x00001000,
	Static = 0x00002000,
	HasOptionalParms = 0x00004000,
	Const = 0x00008000,
	Public = 0x00020000,
	Private = 0x00040000,
	Protected = 0x00080000,
	Delegate = 0x00100000,
	NetServer = 0x00200000,
	HasOutParms = 0x00400000,
	HasDefaults = 0x00800000,
	NetClient = 0x01000000,
	DLLImport = 0x02000000,
	K2Call = 0x04000000,
	K2Override = 0x08000000,
	K2Pure = 0x10000000
};

inline bool operator&(UEFunctionFlags lhs, UEFunctionFlags rhs)
{
	return (static_cast<std::underlying_type_t<UEFunctionFlags>>(lhs) & static_cast<std::underlying_type_t<UEFunctionFlags>>(rhs)) == static_cast<std::underlying_type_t<UEFunctionFlags>>(rhs);
}

std::string StringifyFlags(const UEFunctionFlags flags);
