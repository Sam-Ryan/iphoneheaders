/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:05 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NPSManager;

@interface NTKCustomMonogramStore : NSObject {

	NPSManager* _npsManager;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)_customMonogramFromPrefs;
-(void)_notifyClientsOfChange;
-(id)customMonogram;
-(void)setCustomMonogram:(id)arg1 ;
-(void)_handlePrefsChanged;
@end

