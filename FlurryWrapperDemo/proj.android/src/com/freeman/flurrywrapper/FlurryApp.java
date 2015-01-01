package com.freeman.flurrywrapper;

import android.app.Application;

import com.flurry.android.FlurryAgent;

/**
 * replace this app class
 * @author freeman
 *
 */
public class FlurryApp extends Application {

	private static final String MY_FLURRY_APIKEY = "PN3456BCQPZK6Y84FM4C";

	@Override
	public void onCreate() {
		super.onCreate();
		
		FlurryAgent.init(this, MY_FLURRY_APIKEY);
	}
}
