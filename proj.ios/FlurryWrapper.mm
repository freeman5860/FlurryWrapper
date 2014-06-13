//
//  FlurryWrapper.cpp
//  PowersOfTwo
//
//  Created by Freeman on 14-6-13.
//
//

#include "FlurryWrapper.h"

#import "Flurry.h"

static FlurryWrapper * s_Instance = NULL;

FlurryWrapper * FlurryWrapper::shareFlurry(){
    if (s_Instance == NULL) {
        s_Instance = new FlurryWrapper();
    }
    return s_Instance;
}

void FlurryWrapper::startSession(const char *app_key){
    [Flurry startSession:[NSString stringWithUTF8String:app_key]];
}

void FlurryWrapper::setCrashReportingEnabled(bool enable){
    [Flurry setCrashReportingEnabled:enable];
}

void FlurryWrapper::logEvent(const char *event){
    [Flurry logEvent:[NSString stringWithUTF8String:event]];
}