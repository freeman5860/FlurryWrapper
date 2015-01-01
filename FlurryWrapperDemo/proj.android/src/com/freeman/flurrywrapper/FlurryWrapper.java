package com.freeman.flurrywrapper;

import java.util.HashMap;

import android.content.Context;

import com.flurry.android.FlurryAgent;

public class FlurryWrapper {
	
	public static void startSession(Context c){
		FlurryAgent.onStartSession(c);
	}
	
	public static void endSession(Context c){
		FlurryAgent.onEndSession(c);
	}
	
	public static void logEvent(String eventId){
		FlurryAgent.logEvent(eventId);
	}
    
    public static void logEventWithValue(String eventId,String key,String value){
    	HashMap<String,String> map = new HashMap<String, String>();
    	map.put(key, value);
        FlurryAgent.logEvent(eventId, map);
    }

}
