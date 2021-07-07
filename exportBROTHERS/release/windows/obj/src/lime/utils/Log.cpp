// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_9de1e3bb9bd9260d_106___init__,"::lime::utils::Log_obj","__init__",0xc6d9689e,"::lime::utils::Log_obj.__init__","lime/utils/Log.hx",106,0x300eb2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_66fab05f10e06d2c_16_debug,"lime.utils.Log","debug",0x08fb4af3,"lime.utils.Log.debug","lime/utils/Log.hx",16,0x300eb2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_66fab05f10e06d2c_28_error,"lime.utils.Log","error",0xa505c468,"lime.utils.Log.error","lime/utils/Log.hx",28,0x300eb2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_66fab05f10e06d2c_49_info,"lime.utils.Log","info",0xefdb33ce,"lime.utils.Log.info","lime/utils/Log.hx",49,0x300eb2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_66fab05f10e06d2c_62_print,"lime.utils.Log","print",0xfa6750cd,"lime.utils.Log.print","lime/utils/Log.hx",62,0x300eb2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_66fab05f10e06d2c_75_println,"lime.utils.Log","println",0xdf773c8f,"lime.utils.Log.println","lime/utils/Log.hx",75,0x300eb2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_66fab05f10e06d2c_87_verbose,"lime.utils.Log","verbose",0xccfd3822,"lime.utils.Log.verbose","lime/utils/Log.hx",87,0x300eb2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_66fab05f10e06d2c_95_warn,"lime.utils.Log","warn",0xf9125da6,"lime.utils.Log.warn","lime/utils/Log.hx",95,0x300eb2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_66fab05f10e06d2c_12_boot,"lime.utils.Log","boot",0xeb3b7f92,"lime.utils.Log.boot","lime/utils/Log.hx",12,0x300eb2b2)
namespace lime{
namespace utils{

void Log_obj::__construct() { }

Dynamic Log_obj::__CreateEmpty() { return new Log_obj; }

void *Log_obj::_hx_vtable = 0;

Dynamic Log_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Log_obj > _hx_result = new Log_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Log_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x78ec8de8;
}

void Log_obj::__init__(){
            	HX_STACKFRAME(&_hx_pos_9de1e3bb9bd9260d_106___init__)
HXLINE( 113)		::Array< ::String > args = ::Sys_obj::args();
HXLINE( 114)		bool _hx_tmp;
HXDLIN( 114)		if (!((args->indexOf(HX_("-v",a9,27,00,00),null()) > -1))) {
HXLINE( 114)			_hx_tmp = (args->indexOf(HX_("-verbose",f5,e6,97,7f),null()) > -1);
            		}
            		else {
HXLINE( 114)			_hx_tmp = true;
            		}
HXDLIN( 114)		if (_hx_tmp) {
HXLINE( 116)			::lime::utils::Log_obj::level = 5;
            		}
            		else {
HXLINE( 124)			::lime::utils::Log_obj::level = 3;
            		}
            	}


int Log_obj::level;

bool Log_obj::throwErrors;

void Log_obj::debug( ::Dynamic message, ::Dynamic info){
            	HX_STACKFRAME(&_hx_pos_66fab05f10e06d2c_16_debug)
HXDLIN(  16)		if ((::lime::utils::Log_obj::level >= 4)) {
HXLINE(  21)			::String message1 = ( (::String)(((HX_("[",5b,00,00,00) + info->__Field(HX_("className",a3,92,3d,dc),::hx::paccDynamic)) + HX_("] ",23,51,00,00))) );
HXDLIN(  21)			::Sys_obj::println(::Std_obj::string((message1 + ::Std_obj::string(message))));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Log_obj,debug,(void))

void Log_obj::error( ::Dynamic message, ::Dynamic info){
            	HX_STACKFRAME(&_hx_pos_66fab05f10e06d2c_28_error)
HXDLIN(  28)		if ((::lime::utils::Log_obj::level >= 1)) {
HXLINE(  30)			::String message1 = ( (::String)(((HX_("[",5b,00,00,00) + info->__Field(HX_("className",a3,92,3d,dc),::hx::paccDynamic)) + HX_("] ERROR: ",8b,d9,df,31))) );
HXDLIN(  30)			::String message2 = (message1 + ::Std_obj::string(message));
HXLINE(  32)			if (::lime::utils::Log_obj::throwErrors) {
HXLINE(  34)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(message2));
            			}
            			else {
HXLINE(  41)				::Sys_obj::println(::Std_obj::string(message2));
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Log_obj,error,(void))

void Log_obj::info( ::Dynamic message, ::Dynamic info){
            	HX_STACKFRAME(&_hx_pos_66fab05f10e06d2c_49_info)
HXDLIN(  49)		if ((::lime::utils::Log_obj::level >= 3)) {
HXLINE(  54)			::String message1 = ( (::String)(((HX_("[",5b,00,00,00) + info->__Field(HX_("className",a3,92,3d,dc),::hx::paccDynamic)) + HX_("] ",23,51,00,00))) );
HXDLIN(  54)			::Sys_obj::println(::Std_obj::string((message1 + ::Std_obj::string(message))));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Log_obj,info,(void))

void Log_obj::print( ::Dynamic message){
            	HX_STACKFRAME(&_hx_pos_66fab05f10e06d2c_62_print)
HXDLIN(  62)		::Sys_obj::print(::Std_obj::string(message));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Log_obj,print,(void))

void Log_obj::println( ::Dynamic message){
            	HX_STACKFRAME(&_hx_pos_66fab05f10e06d2c_75_println)
HXDLIN(  75)		::Sys_obj::println(::Std_obj::string(message));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Log_obj,println,(void))

void Log_obj::verbose( ::Dynamic message, ::Dynamic info){
            	HX_STACKFRAME(&_hx_pos_66fab05f10e06d2c_87_verbose)
HXDLIN(  87)		if ((::lime::utils::Log_obj::level >= 5)) {
HXLINE(  89)			::String message1 = ( (::String)(((HX_("[",5b,00,00,00) + info->__Field(HX_("className",a3,92,3d,dc),::hx::paccDynamic)) + HX_("] ",23,51,00,00))) );
HXDLIN(  89)			::Sys_obj::println(::Std_obj::string((message1 + ::Std_obj::string(message))));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Log_obj,verbose,(void))

void Log_obj::warn( ::Dynamic message, ::Dynamic info){
            	HX_STACKFRAME(&_hx_pos_66fab05f10e06d2c_95_warn)
HXDLIN(  95)		if ((::lime::utils::Log_obj::level >= 2)) {
HXLINE( 100)			::String message1 = ( (::String)(((HX_("[",5b,00,00,00) + info->__Field(HX_("className",a3,92,3d,dc),::hx::paccDynamic)) + HX_("] WARNING: ",5f,da,b0,cd))) );
HXDLIN( 100)			::Sys_obj::println(::Std_obj::string((message1 + ::Std_obj::string(message))));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Log_obj,warn,(void))


Log_obj::Log_obj()
{
}

bool Log_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"info") ) { outValue = info_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"warn") ) { outValue = warn_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { outValue = ( level ); return true; }
		if (HX_FIELD_EQ(inName,"debug") ) { outValue = debug_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"error") ) { outValue = error_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"print") ) { outValue = print_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"println") ) { outValue = println_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"verbose") ) { outValue = verbose_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"throwErrors") ) { outValue = ( throwErrors ); return true; }
	}
	return false;
}

bool Log_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { level=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"throwErrors") ) { throwErrors=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Log_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Log_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &Log_obj::level,HX_("level",84,15,63,72)},
	{::hx::fsBool,(void *) &Log_obj::throwErrors,HX_("throwErrors",71,b5,e0,19)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Log_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Log_obj::level,"level");
	HX_MARK_MEMBER_NAME(Log_obj::throwErrors,"throwErrors");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Log_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Log_obj::level,"level");
	HX_VISIT_MEMBER_NAME(Log_obj::throwErrors,"throwErrors");
};

#endif

::hx::Class Log_obj::__mClass;

static ::String Log_obj_sStaticFields[] = {
	HX_("level",84,15,63,72),
	HX_("throwErrors",71,b5,e0,19),
	HX_("debug",53,52,1f,d7),
	HX_("error",c8,cb,29,73),
	HX_("info",6e,38,bb,45),
	HX_("print",2d,58,8b,c8),
	HX_("println",ef,db,33,84),
	HX_("verbose",82,d7,b9,71),
	HX_("warn",46,62,f2,4e),
	::String(null())
};

void Log_obj::__register()
{
	Log_obj _hx_dummy;
	Log_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.utils.Log",0e,21,76,06);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Log_obj::__GetStatic;
	__mClass->mSetStaticField = &Log_obj::__SetStatic;
	__mClass->mMarkFunc = Log_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Log_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Log_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Log_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Log_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Log_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Log_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_66fab05f10e06d2c_12_boot)
HXDLIN(  12)		throwErrors = true;
            	}
}

} // end namespace lime
} // end namespace utils
