#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.ConfigHandler
struct ConfigHandler_t1711;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t284;
// Mono.Xml.SmallXmlParser
struct SmallXmlParser_t1439;
// Mono.Xml.SmallXmlParser/IAttrList
struct IAttrList_t1977;
// System.Runtime.Remoting.ProviderData
struct ProviderData_t1712;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Runtime.Remoting.ConfigHandler::.ctor(System.Boolean)
extern "C" void ConfigHandler__ctor_m10576 (ConfigHandler_t1711 * __this, bool ___onlyDelayedChannels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ValidatePath(System.String,System.String[])
extern "C" void ConfigHandler_ValidatePath_m10577 (ConfigHandler_t1711 * __this, String_t* ___element, StringU5BU5D_t284* ___paths, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.ConfigHandler::CheckPath(System.String)
extern "C" bool ConfigHandler_CheckPath_m10578 (ConfigHandler_t1711 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::OnStartParsing(Mono.Xml.SmallXmlParser)
extern "C" void ConfigHandler_OnStartParsing_m10579 (ConfigHandler_t1711 * __this, SmallXmlParser_t1439 * ___parser, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::OnProcessingInstruction(System.String,System.String)
extern "C" void ConfigHandler_OnProcessingInstruction_m10580 (ConfigHandler_t1711 * __this, String_t* ___name, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::OnIgnorableWhitespace(System.String)
extern "C" void ConfigHandler_OnIgnorableWhitespace_m10581 (ConfigHandler_t1711 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::OnStartElement(System.String,Mono.Xml.SmallXmlParser/IAttrList)
extern "C" void ConfigHandler_OnStartElement_m10582 (ConfigHandler_t1711 * __this, String_t* ___name, Object_t * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ParseElement(System.String,Mono.Xml.SmallXmlParser/IAttrList)
extern "C" void ConfigHandler_ParseElement_m10583 (ConfigHandler_t1711 * __this, String_t* ___name, Object_t * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::OnEndElement(System.String)
extern "C" void ConfigHandler_OnEndElement_m10584 (ConfigHandler_t1711 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadCustomProviderData(System.String,Mono.Xml.SmallXmlParser/IAttrList)
extern "C" void ConfigHandler_ReadCustomProviderData_m10585 (ConfigHandler_t1711 * __this, String_t* ___name, Object_t * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadLifetine(Mono.Xml.SmallXmlParser/IAttrList)
extern "C" void ConfigHandler_ReadLifetine_m10586 (ConfigHandler_t1711 * __this, Object_t * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.ConfigHandler::ParseTime(System.String)
extern "C" TimeSpan_t1235  ConfigHandler_ParseTime_m10587 (ConfigHandler_t1711 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadChannel(Mono.Xml.SmallXmlParser/IAttrList,System.Boolean)
extern "C" void ConfigHandler_ReadChannel_m10588 (ConfigHandler_t1711 * __this, Object_t * ___attrs, bool ___isTemplate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ProviderData System.Runtime.Remoting.ConfigHandler::ReadProvider(System.String,Mono.Xml.SmallXmlParser/IAttrList,System.Boolean)
extern "C" ProviderData_t1712 * ConfigHandler_ReadProvider_m10589 (ConfigHandler_t1711 * __this, String_t* ___name, Object_t * ___attrs, bool ___isTemplate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadClientActivated(Mono.Xml.SmallXmlParser/IAttrList)
extern "C" void ConfigHandler_ReadClientActivated_m10590 (ConfigHandler_t1711 * __this, Object_t * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadServiceActivated(Mono.Xml.SmallXmlParser/IAttrList)
extern "C" void ConfigHandler_ReadServiceActivated_m10591 (ConfigHandler_t1711 * __this, Object_t * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadClientWellKnown(Mono.Xml.SmallXmlParser/IAttrList)
extern "C" void ConfigHandler_ReadClientWellKnown_m10592 (ConfigHandler_t1711 * __this, Object_t * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadServiceWellKnown(Mono.Xml.SmallXmlParser/IAttrList)
extern "C" void ConfigHandler_ReadServiceWellKnown_m10593 (ConfigHandler_t1711 * __this, Object_t * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadInteropXml(Mono.Xml.SmallXmlParser/IAttrList,System.Boolean)
extern "C" void ConfigHandler_ReadInteropXml_m10594 (ConfigHandler_t1711 * __this, Object_t * ___attrs, bool ___isElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadPreload(Mono.Xml.SmallXmlParser/IAttrList)
extern "C" void ConfigHandler_ReadPreload_m10595 (ConfigHandler_t1711 * __this, Object_t * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ConfigHandler::GetNotNull(Mono.Xml.SmallXmlParser/IAttrList,System.String)
extern "C" String_t* ConfigHandler_GetNotNull_m10596 (ConfigHandler_t1711 * __this, Object_t * ___attrs, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ConfigHandler::ExtractAssembly(System.String&)
extern "C" String_t* ConfigHandler_ExtractAssembly_m10597 (ConfigHandler_t1711 * __this, String_t** ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::OnChars(System.String)
extern "C" void ConfigHandler_OnChars_m10598 (ConfigHandler_t1711 * __this, String_t* ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::OnEndParsing(Mono.Xml.SmallXmlParser)
extern "C" void ConfigHandler_OnEndParsing_m10599 (ConfigHandler_t1711 * __this, SmallXmlParser_t1439 * ___parser, const MethodInfo* method) IL2CPP_METHOD_ATTR;
