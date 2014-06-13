FlurryWrapper
=============

Integrate Flurry For Cocos2d-x

iOS:
1. Download the new Flurry iOS SDK

2. Add the Flurry lib to your project 
   * In the finder, drag Flurry/ into project's file folder. (NOTE: If you are upgrading the Flurry iOS SDK, be sure to remove any existing Flurry library folders from your project's file folder before proceeding.)
   * Now add it to your project: File > Add Files to "YOUR PROJECT"
   * Add SystemConfiguration.framework to your app. This is required for Reachability to manage network operations efficiently.
   * For iOS SDK 4.2.3+, add Security.framework to your app.
   
3. Incorporate the following lines of Flurry code:
   
   FlurryWrapper::shareFlurry()->startSession("**********");
   FlurryWrapper::shareFlurry()->setCrashReportingEnabled(true);
	