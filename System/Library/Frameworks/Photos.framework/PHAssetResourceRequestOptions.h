/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:52 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PHAssetResourceRequestOptions : NSObject <NSCopying> {

	BOOL _networkAccessAllowed;
	BOOL _resistentToPrune;
	/*^block*/id _progressHandler;

}

@property (assign,getter=isNetworkAccessAllowed,nonatomic) BOOL networkAccessAllowed;              //@synthesize networkAccessAllowed=_networkAccessAllowed - In the implementation block
@property (nonatomic,copy) id progressHandler;                                                     //@synthesize progressHandler=_progressHandler - In the implementation block
@property (assign,nonatomic) BOOL resistentToPrune;                                                //@synthesize resistentToPrune=_resistentToPrune - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setProgressHandler:(id)arg1 ;
-(BOOL)resistentToPrune;
-(void)setNetworkAccessAllowed:(BOOL)arg1 ;
-(id)progressHandler;
-(void)setResistentToPrune:(BOOL)arg1 ;
-(BOOL)isNetworkAccessAllowed;
@end
