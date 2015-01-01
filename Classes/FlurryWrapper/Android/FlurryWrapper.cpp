#include "FlurryWrapper.h"
#include <jni.h>
#include "platform/android/jni/JniHelper.h"

using namespace cocos2d;

static FlurryWrapper * s_Instance = NULL;

FlurryWrapper * FlurryWrapper::shareFlurry(){
	if(s_Instance == NULL){
		s_Instance = new FlurryWrapper();
	}

	return s_Instance;
}

void FlurryWrapper::logEvent(const char * event){
    JniMethodInfo minfo;
    bool isHave = JniHelper::getStaticMethodInfo(minfo,
                                                 "com/freeman/flurrywrapper/FlurryWrapper","logEvent","(Ljava/lang/String;)V");
    if(!isHave){
        //CCLog("jni:openURL 函数不存在");
    }else{
        jstring jurl = minfo.env->NewStringUTF(event);
        minfo.env->CallStaticVoidMethod(minfo.classID,minfo.methodID,jurl);
    }
}
