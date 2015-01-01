//
//  FlurryWrapper.h
//  PowersOfTwo
//
//  Created by Freeman on 14-6-13.
//
//

#ifndef PowersOfTwo_FlurryWrapper_h
#define PowersOfTwo_FlurryWrapper_h

class FlurryWrapper{
public:
    static FlurryWrapper * shareFlurry();
    
    // start session
    void startSession(const char * app_key);
    // enable crash report
    void setCrashReportingEnabled(bool enable);
    // log event
    void logEvent(const char * event);
    // log event with value
    void logEvent(const char * event, const char * key, const char * value);
};


#endif
